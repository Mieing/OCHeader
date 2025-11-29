@class AWECaptionFollowShotResourceHelper, ACCStickerBlockApplyPredicate, IESEffectModel, ACCRecordEffectCaptionEditor;
@protocol ACCRecordSelectMusicService, ACCCameraService, ACCRecordFlowService, ACCRecorderViewContainer, ACCRecordPropService;

@interface AWEStickerApplyCaptionFollowShotEffectHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> recordFlowService;
@property (retain, nonatomic) id<ACCRecordSelectMusicService> selectMusicService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) AWECaptionFollowShotResourceHelper *resourceHelper;
@property (retain, nonatomic) ACCRecordEffectCaptionEditor *editor;
@property (retain, nonatomic) IESEffectModel *lastProp;
@property (nonatomic) long long propSource;
@property (retain, nonatomic) ACCStickerBlockApplyPredicate *predicate;
@property (nonatomic) BOOL firstBoundingRect;
@property (nonatomic) double musicCurrentPlayTime;

- (id)publishModel;
- (id)captionFollowShotModel;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)handlerDidBecomeActive;
- (void)parseEffect:(id)a0;
- (void)cleanCaptionFollowShotSticker;
- (void)cleanCaptionFollowShotModel:(id)a0;
- (id)captionFollowShotModelWithSticker:(id)a0;
- (id)repoCaptionFollowShot;
- (void)moveStickerToSafeArea;
- (id)createEditorWithEffect:(id)a0;
- (void)applyTextTemplateWithEffect:(id)a0;
- (void)updateTextTemplate;
- (BOOL)shouldApplyProp:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeArea;
- (void).cxx_destruct;

@end
