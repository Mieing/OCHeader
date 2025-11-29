@class UIImageView, UIButton, UILabel;
@protocol IESLiveFeedDrawerListOpenLiveButtonDelegate;

@interface IESLiveFeedDrawerListOpenLiveButton : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *openLiveButton;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (weak, nonatomic) id<IESLiveFeedDrawerListOpenLiveButtonDelegate> delegate;

- (void)openLive;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
