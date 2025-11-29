@class NSArray, NSDictionary;

@interface AWESearchPhotoSearchBoxModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *boxDetection;
@property (copy, nonatomic) NSDictionary *timeCost;
@property (copy, nonatomic) NSArray *sectionList;
@property (nonatomic) long long resultStatus;

+ (id)sectionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
