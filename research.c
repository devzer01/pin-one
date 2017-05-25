//
// Created by nayana on 25/5/2560.
//

typedef struct Pull {
    char *text;
    char *locale;
};

typedef struct Push {
    char *text;
    char *locale;
};

typedef struct Action {
    struct Pull **pull;
    struct Push **push;
};

typedef struct Feeling {
    //feelings are associated with actions
};

//the response is based on the level of well being

//fear fight for survival

typedef struct Concept {
    //char id[3 * 3 * 3];
    struct Word *word;
    struct Concept **above;
    struct Concept **same;
    struct Concept **below;
    struct Word **keywords;
} Concept;



char **synonym;
struct Concept **unrelated;
struct Concept **related;
struct Concept **recognition;
struct Concept **response;