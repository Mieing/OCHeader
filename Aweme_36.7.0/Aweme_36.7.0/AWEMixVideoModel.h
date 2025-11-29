@class AWEURLModel, AWEPaymentEntertainmentProductModel, AWECodeGenMixVipInfoModel, NSDictionary, AWECodeGenSeriesNewMixModel, AWEVideoChargeStrategyStruct, AWEMixAuthorInfoModel, AWEPlayletChargeInfoModel, NSString, AWEMixVideoStaticsModel, NSArray, AWEUserModel, AWEShareModel, NSNumber, AWEMixVideoStatusModel;

@interface AWEMixVideoModel : AWEBaseApiModel <NSCoding>

@property (retain, nonatomic) NSArray *shareExtVideoCoverURLs;
@property (retain, nonatomic) NSArray *shareExtVideoItems;
@property (copy, nonatomic) NSString *mixExtraString;
@property (copy, nonatomic) NSString *mixID;
@property (copy, nonatomic) NSString *mixName;
@property (nonatomic) BOOL hasRecommendMix;
@property (nonatomic) BOOL isWholeMix;
@property (retain, nonatomic) NSNumber *isSerialMix;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSNumber *enableRequestAdInMixDetail;
@property (retain, nonatomic) NSDictionary *mixExtra;
@property (retain, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (retain, nonatomic) AWEMixVideoStatusModel *statusModel;
@property (retain, nonatomic) AWEMixVideoStaticsModel *staticsModel;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (nonatomic) unsigned long long mixType;
@property (nonatomic) unsigned long long mixInnerType;
@property (nonatomic) unsigned long long mixPicType;
@property (retain, nonatomic) AWEMixAuthorInfoModel *autoMixAuthorInfo;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) NSNumber *updateTime;
@property (retain, nonatomic) NSString *watchedItem;
@property (retain, nonatomic) NSNumber *watchedEpisode;
@property (copy, nonatomic) NSString *xiguaExtraInfo;
@property (nonatomic) BOOL disableDisplay;
@property (nonatomic) BOOL disableDisplayInner;
@property (nonatomic) BOOL isCreatedSoon;
@property (retain, nonatomic) AWEVideoChargeStrategyStruct *chargeStrategyModel;
@property (copy, nonatomic) NSString *gameCollectionId;
@property (copy, nonatomic) NSString *watchedItemID;
@property (retain, nonatomic) AWEPlayletChargeInfoModel *paymentChargeInfoModel;
@property (retain, nonatomic) AWEPaymentEntertainmentProductModel *paymentEntertainmentProductModel;
@property (nonatomic) BOOL isIaa;
@property (retain, nonatomic) AWECodeGenMixVipInfoModel *mixVipInfoModel;
@property (retain, nonatomic) AWEURLModel *lightIconUrl;
@property (retain, nonatomic) AWEURLModel *darkIconUrl;
@property (retain, nonatomic) AWECodeGenSeriesNewMixModel *seriesNewMixModel;

+ (id)coverUrlJSONTransformer;
+ (id)paymentEntertainmentProductModelJSONTransformer;
+ (id)paymentChargeInfoModelJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)iconUrlJSONTransformer;
+ (id)statusModelJSONTransformer;
+ (id)staticsModelJSONTransformer;
+ (id)shareInfoModelJSONTransformer;
+ (id)authorInfoJSONTransformer;
+ (id)chargeStrategyModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mixPicTypeDesc;
- (BOOL)isFromMediumPlayList;
- (BOOL)isTheLastEpisode;
- (long long)episodeValue;
- (BOOL)isMixPlaylet;
- (void)syncFromMixInfo:(id)a0;
- (void).cxx_destruct;

@end
