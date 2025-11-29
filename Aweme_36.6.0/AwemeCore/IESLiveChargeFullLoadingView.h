@class UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveWebPPlayer, IESLiveChargeFullLoadingViewDelegate;

@interface IESLiveChargeFullLoadingView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (weak, nonatomic) id<IESLiveChargeFullLoadingViewDelegate> delegate;

- (void)closeBtnClick;
- (void)updateTips:(id)a0;
- (void)setupUIs;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)show;

@end
