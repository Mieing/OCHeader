@class NSArray, NSString, CKGenericTemplateModel, AWEGenericTemplateModelMixinDownloadInfo, AWEGenericTemplateModelMixinTemplateInfo, ACCEffectTextOnImageInfo, AWEEffectCaptionFollowShotInfo;
@protocol ACCMusicModelProtocol;

@interface AWEGenericTemplateModelMixinInfo : NSObject

@property (weak, nonatomic) CKGenericTemplateModel *hostTemplateModel;
@property (retain, nonatomic) AWEGenericTemplateModelMixinDownloadInfo *downloadInfo;
@property (retain, nonatomic) AWEGenericTemplateModelMixinTemplateInfo *templateInfo;
@property (retain, nonatomic) ACCEffectTextOnImageInfo *textOnImageInfo;
@property (retain, nonatomic) AWEEffectCaptionFollowShotInfo *captionFollowShotInfo;
@property (retain, nonatomic) id<ACCMusicModelProtocol> templateMusic;
@property (readonly, nonatomic) BOOL isTemplateMusicDownloaded;
@property (retain, nonatomic) id<ACCMusicModelProtocol> templateBindMusic;
@property (copy, nonatomic) NSString *trasitionPath;
@property (copy, nonatomic) NSString *followedMusicId;
@property (copy, nonatomic) NSString *dynamicTemplateFollowMusicId;
@property (nonatomic) BOOL isFromAIGCAsyncRecovery;
@property (nonatomic) BOOL isMusicBeatsPlaceHolder;
@property (nonatomic) BOOL isAIMemoriesType;
@property (retain, nonatomic) NSArray *followShootParams;
@property (readonly, nonatomic) BOOL isSameMusicMV;
@property (nonatomic) BOOL isAIGCI2TTemplate;
@property (nonatomic) BOOL isAIGCAsyncRequestTemplate;

- (BOOL)isMusicBeatsDynamicTemplate;
- (BOOL)enableChangeMusicForDynamicTemplate;
- (BOOL)enableUpdateSlotDurationForDynamicTemplate;
- (BOOL)isImageTemplateToVideoTemplate;
- (BOOL)isSingleSlotTemplate;
- (BOOL)shouldHandleTemplateDurationWithMusic;
- (id)filePath;
- (void).cxx_destruct;

@end
