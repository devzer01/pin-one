#include <stdio.h>
#include <malloc.h>
#include <memory.h>


struct Conkey *bootstrap();
struct Concept *traverse(struct Concept *concept, char *term);
struct _condex *getindex();

    typedef struct _concept {
        char *primary;
        struct Concept **link;
    } Concept;

    typedef struct _conkey {
        char *key;
        struct Concept *value;
        struct Conkey *next;
        struct Conkey *prev;
        struct Conkey *head;
    } Conkey;

    typedef struct _condex {
        int *cursor;
        struct Conkey **conkey;
        struct Conkey *head;
    } Condex;

    struct _concept *traverse(Concept *concept, char *phrase) {
        while (concept->link != NULL) {
            if (strcmp(concept->primary, phrase)) {
                return (struct _concept *)concept;
            }
            concept = (Concept *) concept->link;
        }
        return NULL;
    }


    struct Concept* factory(char *name)
    {
        struct Concept *proto = (struct Concept *) malloc(sizeof(struct Concept));
        proto->primary = malloc(strlen(name) + 1);
        strcpy(proto->primary, name);
        return proto;
    }

    struct Concept *link(struct Concept *dst, struct Concept *src) {
        dst->link = (Concept **) malloc(sizeof(struct Concept));
        *(dst)->link = src;
        return dst;
    }

    int writekey(char *key, struct Concept *val) {
        struct Conkey *conkey = NULL;
        conkey->key = (char *) malloc(sizeof(key));
        conkey->key = key;
        conkey->value = (struct Concept *) malloc(sizeof(val));
        /*condex->head = (struct Conkey *) malloc(sizeof(conkey));
        condex->head*/

        return 0;
    }

    void Writedex(char *key, struct Concept *value) {
        struct Condex *condex = getindex();
        struct Conkey *conkey = NULL; // (struct Conkey *) malloc(sizeof(struct Conkey));
        conkey = malloc(sizeof(struct Conkey));
        conkey->key = (char *) malloc(sizeof(strlen(dst)));
        conkey->value = (struct Concept *) malloc(sizeof(condst));
        condex->conkey[condex->cursor] = (struct Conkey *) malloc(sizeof(conkey));
        condex->conkey[condex->cursor] = conkey;
    }

    Condex *getindex() {
        static Condex *condex= (Condex *) malloc(sizeof(struct _condex));
        return condex;
    }

    struct Concept *find(char *value) {
        if (condex != NULL && condex->head != NULL && condex->head->value != NULL) {
            return condex->head->value;
        }

        return NULL;
    }

    struct Concept * linkfactory(char *dst, char *src) {
        struct Concept *condst = NULL;
        if (NULL == (condst = find(dst))) {
             condst = factory(dst);
        }
        struct Concept *consrc = NULL;
        if (NULL == (consrc = find(src))) {
            consrc = factory(src);
        }
        link(condst, consrc);


        return condst;
    }

    struct Conkey *bootstrap() {

        struct Conkey *weather = (struct Conkey *) malloc(sizeof(struct Conkey));
        char *tw = "weather";
        weather->key = malloc(strlen(tw));
        strcpy(weather->key, tw);

        struct Concept *rain = linkfactory("rain", "water");
        rain = linkfactory("rain", "thunder");
        linkfactory("rain", "lightning");
        linkfactory("rain", "clouds");
        linkfactory("rain", "floods");

        return weather;
    }

int main(int argc, char *argv[]) {

    condex = (struct Condex *) malloc(sizeof(struct Condex));
    *(condex)->cursor = (int *) malloc(sizeof(int));
    /*char *term = (char *) malloc(sizeof(argv[1]));
    term = argv[1];*/
    const char *temp = (const char *) "rain";
    char *term = (char *) malloc(sizeof(strlen(temp)));
    //term = argv[1];
    printf("searching for %s\n", term);
    struct Conkey *weather = (struct Conkey *) bootstrap();
    printf("searching for %s\n", term);
    struct Concept *root = (struct Concept *) malloc(sizeof(struct Concept));
    printf("searching for %s\n", term);
    struct Concept *result = (struct Concept * ) malloc(sizeof(struct Concept));
    printf("loaded idealogy tree %s\n", weather->key);
    //research(result->keywords)
    result = traverse(weather->value, term);
    //memcpy(result, (Concept *) , NULL);
    if (result != NULL) {
        printf("found what we are looking for\n");
        printf("%s, \n", result->primary);
    }

    return 0;
}