@class AWEUserButtonFollowContext;

@interface AWEUserButtonFollowedState : AWEUserButtonState

@property (retain, nonatomic) AWEUserButtonFollowContext *context;

- (void)unfollowUser;
- (void)onClickButton;
- (void)trackUnfollow;
- (void).cxx_destruct;
- (id)init;

@end
