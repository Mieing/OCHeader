@class NSArray;

@interface AWEUserProfileAdVideoResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *adItems;
@property (retain, nonatomic) NSArray *itemSeqs;

+ (id)adItemsJSONTransformer;
+ (id)itemSeqsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
