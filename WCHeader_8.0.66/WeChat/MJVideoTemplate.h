@class MJCameraTemplateInfo, NSString, MJTemplateDynamicInfo, NSData, MJCommonTemplateInfo, MJTemplateFinderEventTopicInfo, MJTemplateFinderUserInfo, OMJTemplateInfo, MJAlbumTemplateInfo, MJTemplateVersionInfo;

@interface MJVideoTemplate : NSObject <PBCoding, NSCopying>

@property (retain, nonatomic) OMJTemplateInfo *oMJTemplateInfo;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long sdkVersion;
@property (retain, nonatomic) MJCommonTemplateInfo *commonTplInfo;
@property (retain, nonatomic) MJCameraTemplateInfo *cameraTplInfo;
@property (retain, nonatomic) MJAlbumTemplateInfo *albumTplInfo;
@property (retain, nonatomic) MJTemplateDynamicInfo *dynamicInfo;
@property (retain, nonatomic) MJTemplateVersionInfo *versionInfo;
@property (retain, nonatomic) MJTemplateFinderEventTopicInfo *eventInfo;
@property (retain, nonatomic) MJTemplateFinderUserInfo *finderUserInfo;
@property (nonatomic) long long videoTemplateSource;
@property (nonatomic) BOOL isMusicRecommendationEnabled;
@property (readonly, nonatomic) BOOL isEditable;
@property (nonatomic) BOOL enableSingleTemplateMusicRec;
@property (copy, nonatomic) NSString *AIModelType;
@property (readonly, nonatomic) BOOL isAITemplate;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finderDefaultTemplate;
+ (void)PBArrayAdd_templateId;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_sdkVersion;
+ (void)PBArrayAdd_commonTplInfo;
+ (void)PBArrayAdd_cameraTplInfo;
+ (void)PBArrayAdd_albumTplInfo;
+ (void)PBArrayAdd_dynamicInfo;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_AIModelType;
+ (void)PBArrayAdd_finderUserInfo;
+ (void)initialize;

- (id)initForFinderDefaultTemplate;
- (BOOL)isFinderDefaultTemplate;
- (id)getPBPropertyTable;
- (id)initWithVideoTemplate:(id)a0;
- (id)initWithShortUrlBindingTemplate:(id)a0;
- (id)initWithOMJTemplateInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
