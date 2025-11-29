@class UIView, NSString, UIImageView, NSDictionary, AWEFormatLineProgressView, UILabel, BDImageView;
@protocol AWEFormatPostMsgFullScreenLoadingViewDelegate;

@interface AWEFormatPostMsgFullScreenLoadingView : UIView

@property (retain, nonatomic) UIImageView *loadingCloseView;
@property (retain, nonatomic) BDImageView *loadingImageView;
@property (retain, nonatomic) AWEFormatLineProgressView *loadingProgressView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *loadingBgView;
@property (retain, nonatomic) BDImageView *bgImageView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (copy, nonatomic) NSString *bgImageUrl;
@property (copy, nonatomic) NSDictionary *config;
@property (weak, nonatomic) id<AWEFormatPostMsgFullScreenLoadingViewDelegate> delegate;

- (void)hideToast;
- (void)updateProgress:(double)a0 completion:(id /* block */)a1;
- (void)updateProgress:(double)a0 inDuration:(double)a1 completion:(id /* block */)a2;
- (void)updateBgImageViewWithUrlString:(id)a0 imageLoadingText:(id)a1;
- (void)updateLoadingText:(id)a0;
- (void)p_makeConstraints;
- (void)p_addActions;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handlePanGesture:(id)a0;

@end
