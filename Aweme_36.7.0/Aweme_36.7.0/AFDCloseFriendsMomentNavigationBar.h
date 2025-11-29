@class AFDCloseFriendsMomentNavigationBarTransitionHelper, AFDCloseFriendsMomentNavigationModel, AFDCloseFriendsMomentNavigationItemStore;

@interface AFDCloseFriendsMomentNavigationBar : UIView

@property (retain, nonatomic) AFDCloseFriendsMomentNavigationItemStore *itemStore;
@property (retain, nonatomic) AFDCloseFriendsMomentNavigationBarTransitionHelper *transitionHelper;
@property (retain, nonatomic) AFDCloseFriendsMomentNavigationModel *model;

- (void)p_setupUIWithDefaultStyle;
- (void)didAppearInFeedView;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
