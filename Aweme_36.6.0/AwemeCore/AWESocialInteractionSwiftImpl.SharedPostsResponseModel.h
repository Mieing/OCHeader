@class NSArray, NSNumber;

@interface AWESocialInteractionSwiftImpl.SharedPostsResponseModel : AWEBaseApiModel {
    void /* function */ awemeList;
}

@property (nonatomic, copy) NSArray *awemeList;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
