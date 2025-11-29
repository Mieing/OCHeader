@class NSString;
@protocol MMFinderLivePIPMinimizeLogicControllerDelegate, MMFinderLivePIPMinimizeLogicDelegate;

@interface MMFinderLiveCustomPIPHandler : MMFinderLivePIPHandler <MMLiveTaskMgrExt, LiveCustomRenderPIPManagerExt>

@property (nonatomic) BOOL isPIPCheckStart;
@property (nonatomic) unsigned long long indicatorState;
@property (weak, nonatomic) id<MMFinderLivePIPMinimizeLogicControllerDelegate> logicControllerDelegate;
@property (weak, nonatomic) id<MMFinderLivePIPMinimizeLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)registerExtensions;
- (void)checkPictureInPictureAbility;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkNeedAutoStartPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(BOOL)a0;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)setIndicatorStateFlag:(unsigned long long)a0;
- (void)clearIndicatorStateFlag:(unsigned long long)a0;
- (void)onPictureInPictureStart;
- (void)updateCurrentVideoDecodePictureInPictureOptions;
- (void)configPIPHandleLogic;
- (id)getPIPHandleLogic;
- (id)getCurrentPIPHandleLogic;
- (BOOL)isPIPHandleLogicPrepared;
- (id)getPIPStartParam;
- (id)getCustomContentView;
- (void)onIndicatorStateChanged;
- (void)onLiveTask:(id)a0 audienceConnectingMicStatusChanged:(BOOL)a1;
- (void).cxx_destruct;

@end
