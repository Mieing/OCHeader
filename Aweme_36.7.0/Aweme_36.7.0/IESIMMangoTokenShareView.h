@class UIStackView, NSArray, AWEIMMangoShareOutShareInfo, NSDictionary, NSString, BDXBridgeEventSubscriber, AWEIMMangoShareTaskInfo;
@protocol IESIMMangoTokenShareViewDelegate;

@interface IESIMMangoTokenShareView : UIView

@property (retain, nonatomic) AWEIMMangoShareOutShareInfo *shareInfo;
@property (retain, nonatomic) NSArray *supportPlatforms;
@property (retain, nonatomic) UIStackView *contentView;
@property (copy, nonatomic) NSArray *supportPlatformsSetting;
@property (copy, nonatomic) NSDictionary *activityBehaviorIDs;
@property (copy, nonatomic) NSDictionary *lynxSchemaMapper;
@property (copy, nonatomic) NSString *activityName;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL markHasTrackShow;
@property (retain, nonatomic) AWEIMMangoShareTaskInfo *taskInfo;
@property (weak, nonatomic) id<IESIMMangoTokenShareViewDelegate> delegate;

- (id)initWithShareInfo:(id)a0;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)p_parseSettings;
- (void)p_createComponents;
- (void)p_layoutComponents;
- (void)p_adjustComponentsForDegradation;
- (void)p_subscribeEvent;
- (id)p_behaviorIDMapper;
- (id)p_supportPlatformModels;
- (id)p_platformButtonsWithPlatforms:(id)a0;
- (void)p_handlePlatformButtonClicked:(id)a0;
- (id)p_createPlatformModelWithPlatform:(id)a0;
- (id)p_checkNetworkIsEnable;
- (id)p_getActivityInfo;
- (id)p_createOpenSchemaWith:(id)a0 activityInfo:(id)a1;
- (id)p_taskInfoForSchemaExt;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;

@end
