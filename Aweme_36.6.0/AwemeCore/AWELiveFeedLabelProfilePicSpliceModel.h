@class NSMutableArray;

@interface AWELiveFeedLabelProfilePicSpliceModel : AWEBaseApiModel

@property (retain, nonatomic) NSMutableArray *profileListArray;

+ (id)profileListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
