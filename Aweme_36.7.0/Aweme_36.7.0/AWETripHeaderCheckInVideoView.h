@class AWETripHeaderCheckInAvatars, UIImageView, UILabel, UIView;

@interface AWETripHeaderCheckInVideoView : UIView

@property (retain, nonatomic) AWETripHeaderCheckInAvatars *iconGroup;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIImageView *rightSideArc;
@property (retain, nonatomic) UIView *placeHolderView;
@property (copy, nonatomic) id /* block */ onClickBlock;

- (double)expectedWidth;
- (void)onClickAction;
- (void)configWithHeadVideoInfo:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
