@class NSNumber, NSString, NSArray, AWECodeGenEpisodeTitleModel, AWECodeGenWaterMarkInfoModel, AWELongVideoInteractControlInfoModel, AWEURLModel, AWELVideoXiguaGuideModel, AWEPaymentChargeInfoModel, AWEPaymentEntertainmentProductModel, AWELVideoPaymentInfo, AWELVideoEntranceData;

@interface AWELVideoEpisodeInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long cornerMark;
@property (retain, nonatomic) AWEURLModel *cover;
@property (copy, nonatomic) NSArray *coverList;
@property (copy, nonatomic) NSArray *largeCoverList;
@property (copy, nonatomic) NSArray *mediumCoverList;
@property (copy, nonatomic) NSArray *thumbCoverList;
@property (nonatomic) long long duration;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long seekTsMsec;
@property (nonatomic) long long seekTsEndMsec;
@property (nonatomic) long long seq;
@property (nonatomic) long long rank;
@property (nonatomic) BOOL isLocatedEpisode;
@property (nonatomic) long long episodeType;
@property (nonatomic) long long parentEpisodeType;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) AWELVideoPaymentInfo *paymentInfo;
@property (nonatomic) BOOL shouldBlockScreenCapture;
@property (retain, nonatomic) AWELongVideoInteractControlInfoModel *interactControlInfo;
@property (retain, nonatomic) AWELVideoXiguaGuideModel *xiguaGuide;
@property (copy, nonatomic) NSString *feedTitle;
@property (nonatomic) long long tryStatus;
@property (retain, nonatomic) AWELVideoEntranceData *entranceData;
@property (nonatomic) long long seekTsType;
@property (retain, nonatomic) AWEPaymentChargeInfoModel *paymentChargeInfo;
@property (retain, nonatomic) AWEPaymentEntertainmentProductModel *paymentProductInfo;
@property (nonatomic) long long episodeTag;
@property (retain, nonatomic) NSNumber *parentItemCreateTime;
@property (retain, nonatomic) AWECodeGenEpisodeTitleModel *episodeTitle;
@property (retain, nonatomic) AWECodeGenWaterMarkInfoModel *waterMarkInfo;
@property (retain, nonatomic) NSArray *highLights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyToModelClassInArrayMap;
+ (id)coverJSONTransformer;
+ (id)coverListJSONTransformer;
+ (id)largeCoverListJSONTransformer;
+ (id)mediumCoverListJSONTransformer;
+ (id)thumbCoverListJSONTransformer;
+ (id)paymentInfoJSONTransformer;
+ (id)interactControlInfoJSONTransformer;
+ (id)xiguaGuideJSONTransformer;
+ (id)entranceDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
