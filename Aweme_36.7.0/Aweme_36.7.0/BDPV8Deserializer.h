@class END_ARRAY, NSData, NSMutableArray, END_SPARSE_ARRAY;

@interface BDPV8Deserializer : NSObject {
    NSData *data;
    struct Deserializer { NSMutableArray *objects; char *ptr; long long remaining; struct TAGS { END_ARRAY *END_OBJECT; END_SPARSE_ARRAY *x0; id x1; } tags; } des;
}

+ (id)deserialize:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id).cxx_construct;
- (id)readValue;

@end
