@class NSString, NSNumber, NSDictionary;

@interface IESLiveChargeBannerRechargeInfo : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *bannerTopDescText;
@property (retain, nonatomic) NSString *bannerBgImg;
@property (retain, nonatomic) NSString *bannerBottomDescColor;
@property (retain, nonatomic) NSString *bannerBottomDescText;
@property (retain, nonatomic) NSString *bannerGuideDescImg;
@property (retain, nonatomic) NSString *bannerIconImg;
@property (retain, nonatomic) NSString *bannerId;
@property (retain, nonatomic) NSString *bannerTopDescColor;
@property (retain, nonatomic) NSNumber *bannerType;
@property (retain, nonatomic) NSString *schemeUrl;
@property (retain, nonatomic) NSNumber *currentCnt;
@property (retain, nonatomic) NSString *progressBgColor;
@property (retain, nonatomic) NSString *progressIndicatorColor;
@property (retain, nonatomic) NSNumber *screenShield;
@property (retain, nonatomic) NSNumber *totalProgress;
@property (retain, nonatomic) NSNumber *validEndTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
