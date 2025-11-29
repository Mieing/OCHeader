@class NSString;
@protocol RTVXRRoomSessionControllerInterface, RTVXRControllerInjector;

@interface RTVInviteWeChatController : NSObject <RTVXRControllerInterface>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
