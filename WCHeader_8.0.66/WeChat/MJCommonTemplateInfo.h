@class NSString, MJFaceRecognitionInfo;

@interface MJCommonTemplateInfo : NSObject <PBCoding, NSCopying>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long usageCount;
@property (copy, nonatomic) NSString *tplMessage;
@property (copy, nonatomic) NSString *previewCovelUrl;
@property (copy, nonatomic) NSString *previewCoverFileMd5;
@property (copy, nonatomic) NSString *previewVideo_Url;
@property (copy, nonatomic) NSString *previewWxamUrl;
@property (copy, nonatomic) NSString *previewWxamFileMd5;
@property (copy, nonatomic) NSString *previewGifUrl;
@property (copy, nonatomic) NSString *previewGifFileMd5;
@property (copy, nonatomic) NSString *tmplDescUrl;
@property (copy, nonatomic) NSString *tmplDescFileMd5;
@property (nonatomic) unsigned long long tmplDescVersion;
@property (copy, nonatomic) NSString *guideWording;
@property (retain, nonatomic) MJFaceRecognitionInfo *faceRecognitionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_usageCount;
+ (void)PBArrayAdd_tplMessage;
+ (void)PBArrayAdd_previewCovelUrl;
+ (void)PBArrayAdd_previewVideo_Url;
+ (void)PBArrayAdd_tmplDescUrl;
+ (void)PBArrayAdd_tmplDescVersion;
+ (void)PBArrayAdd_previewWxamUrl;
+ (void)PBArrayAdd_previewGifUrl;
+ (void)PBArrayAdd_previewCoverFileMd5;
+ (void)PBArrayAdd_previewWxamFileMd5;
+ (void)PBArrayAdd_previewGifFileMd5;
+ (void)PBArrayAdd_tmplDescFileMd5;
+ (void)PBArrayAdd_guideWording;
+ (void)PBArrayAdd_faceRecognitionInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCommonTemplateInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
