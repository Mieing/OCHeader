@class NSArray, NSString, AWEShareModel;

@interface AWEHotSearchNewResponseDataModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *hotSearchList;
@property (copy, nonatomic) NSArray *recommendList;
@property (copy, nonatomic) NSString *activeTime;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (copy, nonatomic) NSArray *risingHotSpotList;
@property (copy, nonatomic) NSString *trendingDescriptionHeader;
@property (copy, nonatomic) NSString *cityCodeOnNearbyBoard;

+ (id)hotSearchListJSONTransformer;
+ (id)recommendListJSONTransformer;
+ (id)risingHotSpotListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
