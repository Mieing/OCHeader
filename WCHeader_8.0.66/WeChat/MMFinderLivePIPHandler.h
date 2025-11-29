@class MMFinderLiveTask, MMFinderLiveTaskId;

@interface MMFinderLivePIPHandler : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (readonly, nonatomic) BOOL isLiveVCAppear;
@property (readonly, nonatomic) BOOL isLiveJoined;
@property (readonly, nonatomic) BOOL isResignActive;
@property (copy, nonatomic) id /* block */ getLiveJoinedCallback;
@property (copy, nonatomic) id /* block */ getLiveVCAppearCallback;
@property (copy, nonatomic) id /* block */ getAppActiveCallback;
@property (copy, nonatomic) id /* block */ showSwitchGuideCallback;

- (id)initWithTaskId:(id)a0;
- (void)checkPictureInPictureAbility;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkNeedAutoStartPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(BOOL)a0;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (BOOL)showPIPSwitchGuide;
- (void).cxx_destruct;

@end
