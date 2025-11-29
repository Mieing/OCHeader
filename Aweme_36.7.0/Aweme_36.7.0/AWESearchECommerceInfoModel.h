@class NSString, NSArray, AWESearchGlobalDoodleConfigModel, AWESearchMerchandiseLogInfoStruct, NSDictionary, AWEURLModel, AWESearchMerchandiseTagInfoModel, AWEDoubleColumnSearchMerchandiseUserEcomBreathInfo;

@interface AWESearchECommerceInfoModel : AWEBaseApiModel

@property (nonatomic) double score;
@property (copy, nonatomic) NSString *scoreText;
@property (copy, nonatomic) NSString *grade;
@property (copy, nonatomic) NSString *enterText;
@property (copy, nonatomic) NSString *salesText;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *shopText;
@property (copy, nonatomic) NSString *shopTitle;
@property (nonatomic) long long shopType;
@property (retain, nonatomic) NSArray *shopTagsArray;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extra;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) AWESearchMerchandiseLogInfoStruct *logInfo;
@property (nonatomic) int recommendTextEllipsisIndex;
@property (copy, nonatomic) NSString *recommendInfo;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) AWEURLModel *shopLogo;
@property (nonatomic) long long jumpType;
@property (copy, nonatomic) NSString *enterColor;
@property (nonatomic) unsigned long long userIdentity;
@property (nonatomic) unsigned long long liveWindowStyle;
@property (nonatomic) BOOL isCardTopStyle;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *btnTextColor;
@property (copy, nonatomic) NSString *btnBackgroundColor;
@property (copy, nonatomic) NSString *cardBackgroundColor;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseUserEcomBreathInfo *breathInfo;
@property (copy, nonatomic) NSDictionary *shopAreaBcmParams;
@property (copy, nonatomic) NSDictionary *liveBcmParams;
@property (nonatomic) BOOL isLive;
@property (copy, nonatomic) NSDictionary *ecomLiveParams;
@property (retain, nonatomic) AWESearchMerchandiseTagInfoModel *shopGuaranteeTag;
@property (copy, nonatomic) NSArray *recommendInfoV2;
@property (copy, nonatomic) NSArray *shopServiceInfos;

+ (id)extraJSONTransformer;
+ (id)tagsJSONTransformer;
+ (id)shopLogoJSONTransformer;
+ (id)shopTagsArrayJSONTransformer;
+ (id)breathInfoJSONTransformer;
+ (id)shopGuaranteeTagJSONTransformer;
+ (id)recommendInfoV2JSONTransformer;
+ (id)shopServiceInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
