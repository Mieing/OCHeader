@class AWEIMMessageBaseViewController, NSString;

@interface AWEIMInfoOtherConsumptionEndInteractor : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMInfoOtherConsumptionEndInteractorInterface>

@property (readonly, nonatomic) AWEIMMessageBaseViewController *vcParent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
