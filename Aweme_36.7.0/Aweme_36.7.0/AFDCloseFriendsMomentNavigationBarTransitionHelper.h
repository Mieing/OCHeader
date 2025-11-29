@class AFDCloseFriendsMomentNavigationItemStore, AFDCloseFriendsMomentNavigationBar;

@interface AFDCloseFriendsMomentNavigationBarTransitionHelper : NSObject

@property (weak, nonatomic) AFDCloseFriendsMomentNavigationBar *navigationBar;
@property (weak, nonatomic) AFDCloseFriendsMomentNavigationItemStore *itemStore;

- (void)setFeedContainViewAlpha:(double)a0 animated:(BOOL)a1;
- (void)setCameraContainViewAlpha:(double)a0 animated:(BOOL)a1;
- (void)setCameraContainViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithNavigationBar:(id)a0;

@end
