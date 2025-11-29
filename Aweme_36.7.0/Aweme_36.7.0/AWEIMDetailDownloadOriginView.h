@class UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMDetailDownloadOriginViewDelegate;

@interface AWEIMDetailDownloadOriginView : UIView

@property (retain, nonatomic) UIImageView *stopIconView;
@property (retain, nonatomic) UIButton *downloadOriginButton;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *gaussianView;
@property (weak, nonatomic) id<AWEIMDetailDownloadOriginViewDelegate> delegate;

- (void)p_setupView;
- (void)setStopIconHidden:(BOOL)a0;
- (void)refreshWithState:(long long)a0 text:(id)a1;
- (void)p_onDownloadOriginButtonTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
