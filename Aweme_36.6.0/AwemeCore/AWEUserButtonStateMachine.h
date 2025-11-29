@class UIButton, NSString, AWESocialRelationObserver, AWEBinding, AWEUserModel, UIAccessibilityCustomAction;

@interface AWEUserButtonStateMachine : BDStateMachine <AWEUserMessage>

@property (retain, nonatomic) UIAccessibilityCustomAction *accessibilityAction;
@property (retain, nonatomic) AWEBinding *followStatusBinding;
@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (weak, nonatomic) UIButton *button;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)clickButton;
- (void)updateMateState:(id)a0;
- (void)onLightInteraction:(id)a0;
- (void)accessibilityClickButton;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
