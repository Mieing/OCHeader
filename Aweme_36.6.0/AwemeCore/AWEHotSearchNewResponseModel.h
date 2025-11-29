@class AWEURLModel, NSArray, NSString, AWEHotSearchNewResponseDataModel, AWEShareModel;

@interface AWEHotSearchNewResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *hotSearchList;
@property (copy, nonatomic) NSArray *recommendList;
@property (copy, nonatomic) NSString *activeTime;
@property (copy, nonatomic) NSString *opDefaultWord;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (copy, nonatomic) NSString *opSearchWord;
@property (copy, nonatomic) NSArray *adSearchList;
@property (copy, nonatomic) NSArray *risingHotSpotList;
@property (copy, nonatomic) NSString *trendingDescriptionHeader;
@property (retain, nonatomic) AWEURLModel *lightBannerModel;
@property (retain, nonatomic) AWEURLModel *darkBannerModel;
@property (copy, nonatomic) NSArray *hotSearchBoardTabList;
@property (retain, nonatomic) AWEHotSearchNewResponseDataModel *dataModel;

+ (id)dataModelJSONTransformer;
+ (id)lightBannerModelJSONTransformer;
+ (id)darkBannerModelJSONTransformer;
+ (id)hotSearchBoardTabListJSONTransformer;
+ (id)adSearchListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setRecommendList:(id)a0;
- (id)recommendList;
- (void)setRisingHotSpotList:(id)a0;
- (id)risingHotSpotList;
- (id)hotSearchList;
- (void)setHotSearchList:(id)a0;
- (id)shareInfo;
- (void).cxx_destruct;
- (void)setShareInfo:(id)a0;
- (id)activeTime;
- (void)setActiveTime:(id)a0;

@end
