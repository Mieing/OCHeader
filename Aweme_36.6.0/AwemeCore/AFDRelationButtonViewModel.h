@class NSString, AFDRelationButtonContext, AWEUserModel, NSObject;
@protocol AFDRelationButtonViewModelDelegate;

@interface AFDRelationButtonViewModel : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEUserModel *user;
@property (weak, nonatomic) NSObject<AFDRelationButtonViewModelDelegate> *delegate;
@property (retain, nonatomic) AFDRelationButtonContext *context;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)onButtonClicked;
- (void)unfollowUser;
- (void)followUser;
- (id)getRelationButtonItem;
- (void)trackRelationBtnShowEvent;
- (BOOL)shouldShowLightInteractionEntrance;
- (BOOL)shouldShowSendMessageEntrance;
- (void)trackEventForQuickReply:(id)a0;
- (void)trackEventForEnterChat;
- (void)updateWithUser:(id)a0 status:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshUI;
- (void)dealloc;
- (void)updateWithUser:(id)a0;

@end
