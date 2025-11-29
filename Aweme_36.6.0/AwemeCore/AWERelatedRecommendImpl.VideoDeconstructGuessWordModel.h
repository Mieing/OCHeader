@class NSDictionary, NSArray;

@interface AWERelatedRecommendImpl.VideoDeconstructGuessWordModel : AWEBaseApiModel {
    void /* function */ extra;
    void /* function */ log_pb;
    void /* function */ gs_entities;
}

@property (nonatomic, copy) NSDictionary *extra;
@property (nonatomic, copy) NSDictionary *log_pb;
@property (nonatomic, copy) NSArray *gs_entities;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)valid;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
