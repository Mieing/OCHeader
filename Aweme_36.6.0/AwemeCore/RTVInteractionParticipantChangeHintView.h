@class UILabel, NSTimer, NSString;
@protocol RTVUserProfileManagerInterface, RTVInteractionParticipantChangeHintViewDelegate, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector;

@interface RTVInteractionParticipantChangeHintView : UIView <RTVXRRoomSessionControllerObserver>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) UILabel *changedBehaviorLabel;
@property (readonly, nonatomic) UILabel *changedUserNameLabel;
@property (retain, nonatomic) NSTimer *hideHintViewTimer;
@property (weak, nonatomic) id<RTVInteractionParticipantChangeHintViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (id)__createCustomLabel;
- (void)__invalidateHideHintViewTimerIfNeeded;
- (void)__refreshAlphaWithIsHidden:(BOOL)a0;
- (void)__startHideHintViewTimer;
- (void).cxx_destruct;
- (void)dealloc;

@end
