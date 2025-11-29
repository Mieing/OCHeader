@class AFDOnlineAvatarViewContext;
@protocol AFDOnlineAvatarViewDelegate;

@interface AFDOnlineAvatarViewModel : NSObject

@property (weak, nonatomic) id<AFDOnlineAvatarViewDelegate> delegate;
@property (retain, nonatomic) AFDOnlineAvatarViewContext *context;
@property (copy, nonatomic) id /* block */ refreshBlock;

- (id)avatarURLList;
- (BOOL)shouldHiddenOnlineView;
- (void)didUpdateActiveStatus;
- (void).cxx_destruct;
- (id)user;
- (void)updateWithContext:(id)a0;
- (void)updateActiveStatus;

@end
