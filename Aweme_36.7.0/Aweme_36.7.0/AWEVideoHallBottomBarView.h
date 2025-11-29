@class UILabel, UIImageView, UIView;

@interface AWEVideoHallBottomBarView : UIView

@property (retain, nonatomic) UIView *videoHallBottomButton;
@property (retain, nonatomic) UILabel *bottomButtonLabel;
@property (retain, nonatomic) UIImageView *bottomButtonLeftIcon;
@property (retain, nonatomic) UIImageView *bottomButtonRightIcon;

- (void)handleClickBottomButton;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
