@class AWEURLModel, NSString, NSArray, NSMutableSet, AWENearbyPOIInfoModel, AWENearbyMultiPOIModel, AWENearbyPOIRankModel;

@interface AWENearbyCardModel : AWEBaseApiModel <AWENearbyPOIRankCardModel, AWENearbyPOIInfoCardModel, AWENearbyMultiPOICardModel>

@property (retain, nonatomic) NSMutableSet *headImgLoadingStatus;
@property (retain, nonatomic) AWENearbyPOIRankModel *poiRankModel;
@property (nonatomic) long long displayType;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSString *cardDetail;
@property (retain, nonatomic) AWEURLModel *bgImageURL;
@property (copy, nonatomic) NSArray *reportValues;
@property (nonatomic) unsigned long long insertionIndex;
@property (retain, nonatomic) AWEURLModel *videoURL;
@property (copy, nonatomic) NSString *cardRequestID;
@property (nonatomic) long long itemCount;
@property (copy, nonatomic) NSArray *bgImgList;
@property (nonatomic) double poiCardFirstShowTime;
@property (nonatomic) long long poiCardIndex;
@property (nonatomic) long long poiCardIndexInReq;
@property (nonatomic) double cardInsertTime;
@property (nonatomic) BOOL hasUseGeckoResourse;
@property (nonatomic) BOOL isExistGeckoResourse;
@property (nonatomic) BOOL videoHasPlay;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWENearbyPOIInfoModel *poiInfoModel;
@property (retain, nonatomic) AWENearbyMultiPOIModel *multiPOIModel;

+ (BOOL)automaticallyDefaultMapping;
+ (id)bgImgListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEnhancedStyle;
- (void)recordHeadImgLoadedWithIndex:(long long)a0;
- (long long)getLoadedHeadImgNum;
- (BOOL)headImgHasLoadWithIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
