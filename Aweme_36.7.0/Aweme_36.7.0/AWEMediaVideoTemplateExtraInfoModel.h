@class AWEMediaTemplateVideoInfoModel, NSString, AWEMediaTemplateDynamicCoverInfo, NSArray, AWEMediaTemplateAuthorInfoModel, AWEWelfareActivityModel;

@interface AWEMediaVideoTemplateExtraInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *aspectRatio;
@property (copy, nonatomic) NSString *nleSummary;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) BOOL hasCommercialMusic;
@property (retain, nonatomic) AWEMediaTemplateVideoInfoModel *video;
@property (retain, nonatomic) AWEMediaTemplateDynamicCoverInfo *dynamicCover;
@property (nonatomic) BOOL isBusiness;
@property (retain, nonatomic) NSArray *challenges;
@property (copy, nonatomic) NSString *hint;
@property (retain, nonatomic) NSArray *relatedWords;
@property (copy, nonatomic) NSString *sdkExtra;
@property (retain, nonatomic) AWEMediaTemplateAuthorInfoModel *author;
@property (nonatomic) unsigned long long usageAmount;
@property (nonatomic) BOOL isCollect;
@property (copy, nonatomic) NSString *sharedId;
@property (copy, nonatomic) NSString *clientKey;
@property (nonatomic) unsigned long long fragmentCount;
@property (retain, nonatomic) NSArray *music;
@property (retain, nonatomic) NSArray *requirements;
@property (retain, nonatomic) NSArray *featureBits;
@property (retain, nonatomic) NSArray *mvTypes;
@property (retain, nonatomic) AWEWelfareActivityModel *activityInfo;
@property (retain, nonatomic) NSArray *urlPrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoJSONTransformer;
+ (id)activityInfoJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)dynamicCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
