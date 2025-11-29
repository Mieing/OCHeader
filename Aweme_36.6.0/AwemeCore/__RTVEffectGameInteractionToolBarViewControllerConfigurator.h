@class NSString;
@protocol RTVXRRoomSessionControllerInterface, RTVXRControllerInjector;

@interface __RTVEffectGameInteractionToolBarViewControllerConfigurator : NSObject <RTVInteractionToolBarViewControllerConfigurator>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) BOOL isNewStyle;
@property (readonly, nonatomic) BOOL needShareIcon;
@property (readonly, nonatomic) BOOL shouldShowInviteIcon;
@property (readonly, copy, nonatomic) NSString *invitationTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
