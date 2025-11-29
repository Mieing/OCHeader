@class NSArray;

@interface AWEFavoriteTagDataResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tagData;
@property (nonatomic) unsigned long long collectionLandingTab;
@property (nonatomic) long long collectsTotalStatus;
@property (retain, nonatomic) NSArray *tabDataV2;

+ (id)tagDataJSONTransformer;
+ (id)tabDataV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
