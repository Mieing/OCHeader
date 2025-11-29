@class NSString, VideoTemplate_FaceRecognitionInfo;

@interface VideoTemplate_CommonTemplateInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int usageCount;
@property (retain, nonatomic) NSString *tplMessage;
@property (retain, nonatomic) NSString *previewCovelUrl;
@property (retain, nonatomic) NSString *previewVideoUrl;
@property (retain, nonatomic) NSString *tmplDescUrl;
@property (nonatomic) unsigned int tmplDescVersion;
@property (retain, nonatomic) NSString *tmplDescWording;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned int coverUrlWidth;
@property (nonatomic) unsigned int coverUrlHeight;
@property (retain, nonatomic) NSString *previewImageGifUrl;
@property (retain, nonatomic) NSString *previewImageWxamUrl;
@property (retain, nonatomic) NSString *previewCoverMd5;
@property (retain, nonatomic) NSString *previewVideoMd5;
@property (retain, nonatomic) NSString *tmplDescMd5;
@property (retain, nonatomic) NSString *coverMd5;
@property (retain, nonatomic) NSString *previewImageGifMd5;
@property (retain, nonatomic) NSString *previewImageWxamMd5;
@property (nonatomic) unsigned int enableDemoVideoPostFeed;
@property (retain, nonatomic) NSString *malePreviewCovelUrl;
@property (retain, nonatomic) NSString *malePreviewCovelMd5;
@property (retain, nonatomic) NSString *femalePreviewCovelUrl;
@property (retain, nonatomic) NSString *femalePreviewCovelMd5;
@property (nonatomic) unsigned int supportedImportedAssetCount;
@property (retain, nonatomic) NSString *guideWording;
@property (retain, nonatomic) VideoTemplate_FaceRecognitionInfo *faceRecognitionInfo;

+ (void)initialize;

@end
