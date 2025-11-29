@class UIImageView, AWEUILoadingView, UIGestureRecognizer;

@interface AWEPadPolymericChannelCoverFavoriteTagView : UIView

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (copy, nonatomic) id /* block */ onClickCallback;
@property (nonatomic) BOOL isFavorited;

- (void)bindEvent;
- (void)showLoading:(BOOL)a0;
- (void)onFavoritesBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;

@end
