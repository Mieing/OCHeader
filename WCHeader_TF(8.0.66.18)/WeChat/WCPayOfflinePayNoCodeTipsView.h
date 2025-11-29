@class UIImageView, MMUILabel, UIButton;
@protocol WCPayOfflinePayNoCodeTipsViewDelegate;

@interface WCPayOfflinePayNoCodeTipsView : MMUIView

@property (weak, nonatomic) id<WCPayOfflinePayNoCodeTipsViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIButton *refreshBtn;

- (id)initNoCodeTipsViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 tipsWording:(id)a2;
- (void)setupContentView:(id)a0;
- (void)refreshBtnPress:(id)a0;
- (void)disableRefreshBtn;
- (void)enableRefreshBtn;
- (void).cxx_destruct;

@end
