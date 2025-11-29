@class UIImageView, UILabel, UIView, UIButton;

@interface AWEBatManDownloadView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIView *rootView;
@property (retain, nonatomic) UIImageView *exitView;
@property (nonatomic) double rwidth;
@property (nonatomic) BOOL canJumpToStore;
@property (copy, nonatomic) id /* block */ playBlock;
@property (copy, nonatomic) id /* block */ exitBlock;

- (void)onExitButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)show:(id)a0;
- (void)setupUI;
- (void)playAction;
- (void)updateWithModel:(id)a0;

@end
