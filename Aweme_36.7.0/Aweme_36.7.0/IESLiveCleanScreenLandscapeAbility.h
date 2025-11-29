@class HTSEventContext, HTSLiveToolbarItem, IESLiveLandscapeCleanSwitch, NSString;
@protocol IESLiveRoomService, HTSLiveDiggAction;

@interface IESLiveCleanScreenLandscapeAbility : NSObject <IESLiveLandscapeSettingRouter>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<HTSLiveDiggAction> diggAction;
@property BOOL isNotUserBehavior;
@property (retain, nonatomic) HTSLiveToolbarItem *clearItem;
@property (retain, nonatomic) IESLiveLandscapeCleanSwitch *cleanSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;

- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)onOrientationTransitionBegin:(long long)a0;
- (BOOL)shouldUseSideStyle;
- (void)changeClearStatusTo:(BOOL)a0;
- (BOOL)clearItemIsSelected;
- (void)toggleClearSettings;
- (BOOL)cleanSwitchIsSelected;
- (void)handleCleanItemWithOrientation:(long long)a0;
- (void)trackCleanSwtichShow;
- (void)changeCleanItemStatus;
- (void)handleClearSettingActions;
- (void).cxx_destruct;
- (BOOL)isClear;

@end
