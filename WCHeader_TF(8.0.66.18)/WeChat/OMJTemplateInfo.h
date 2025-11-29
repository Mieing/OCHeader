@class NSString, NSURL, NSData, OMJChannelEventConfig;

@interface OMJTemplateInfo : NSObject

@property (readonly, nonatomic) NSString *templateName;
@property (readonly, nonatomic) NSString *templateID;
@property (readonly, nonatomic) NSURL *coverImageURL;
@property (readonly, nonatomic) NSString *coverImageFileMD5;
@property (readonly, nonatomic) NSURL *previewImageGifURL;
@property (readonly, nonatomic) NSString *previewImageGifFileMD5;
@property (readonly, nonatomic) NSURL *previewImageWxAMURL;
@property (readonly, nonatomic) NSString *previewImageWxAMFileMD5;
@property (readonly, nonatomic) OMJChannelEventConfig *channelEventConfig;
@property (readonly, nonatomic) NSString *templateDescURL;
@property (readonly, nonatomic) NSString *templateDescFileMD5;
@property (readonly, nonatomic) unsigned long long templateDescVersion;
@property (readonly, nonatomic) unsigned long long minimumiOSSDKVersion;
@property (readonly, nonatomic) unsigned long long minimumAndroidSDKVersion;
@property (nonatomic) unsigned long long minimumAssetCount;
@property (nonatomic) unsigned long long maximumAssetCount;
@property (readonly, nonatomic) NSData *sessionBuffer;
@property (readonly, nonatomic) NSString *aiModelType;

+ (id)templateWithName:(id)a0 coverUrls:(id)a1 templateId:(id)a2;
+ (id)templateWithName:(id)a0 coverUrls:(id)a1 templateId:(id)a2 localSVGIconName:(id)a3;
+ (id)templateWithName:(id)a0 coverUrls:(id)a1 templateId:(id)a2 descUrl:(id)a3 descVer:(unsigned long long)a4 localSVGIconName:(id)a5;
+ (id)templateWithName:(id)a0 coverUrl:(id)a1 coverFileMd5:(id)a2 previewWxamUrl:(id)a3 previewWxamFileMd5:(id)a4 previewGifUrl:(id)a5 previewGifFileMd5:(id)a6 templateId:(id)a7 descUrl:(id)a8 descFileMd5:(id)a9 descVer:(unsigned long long)a10 localSVGIconName:(id)a11;
+ (id)finderDefaultTemplateId;
+ (id)emptyImageTemplateInfo;
+ (id)emptyTemplateInfo;
+ (id)loadingTemplateInfo;
+ (id)templateWithMJVideoTemplate:(id)a0;

- (id)getLocalSVGName;
- (BOOL)isEmptyImageTemplate;
- (BOOL)isFinderDefaultTemplate;
- (BOOL)isEmptyTemplate;
- (BOOL)isLoadingTemplate;
- (BOOL)isRecommendTemplate;
- (id)initWithBackingInfo:(const void *)a0;
- (id)initWithTemplateID:(id)a0 templateName:(id)a1 coverImageURL:(id)a2 previewImageGifURL:(id)a3 previewImageWxAMURL:(id)a4 channelEventConfig:(id)a5 templateDescURL:(id)a6 templateDescVersion:(unsigned long long)a7 minimumiOSSDKVersion:(unsigned long long)a8 minimumAndroidSDKVersion:(unsigned long long)a9 sessionBuffer:(id)a10;
- (id)initWithTemplateID:(id)a0 templateName:(id)a1 coverImageURL:(id)a2 coverImageFileMD5:(id)a3 previewImageGifURL:(id)a4 previewImageGifFileMD5:(id)a5 previewImageWxAMURL:(id)a6 previewImageWxAMFileMD5:(id)a7 channelEventConfig:(id)a8 templateDescURL:(id)a9 templateDescFileMD5:(id)a10 templateDescVersion:(unsigned long long)a11 minimumiOSSDKVersion:(unsigned long long)a12 minimumAndroidSDKVersion:(unsigned long long)a13 sessionBuffer:(id)a14 aiModelType:(id)a15;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
