@class DUXBaseImageView, UIView;

@interface AWEHotSearchCommentTitleFlameView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseImageView *flameImageView;

- (void)updateToLightTheme;
- (void)makeConstraint;
- (void)updateToDarkTheme;
- (void)updateToGrayTheme;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
