@class NSString, UIView, AWEECOMIMIndicatorView, BDImageView;

@interface AWEECOMIMEmoticonPackagePopView : UIView

@property (retain, nonatomic) BDImageView *popEmoticonView;
@property (retain, nonatomic) AWEECOMIMIndicatorView *loadingView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectInTargetView;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *showView;
@property (copy, nonatomic) NSString *emoticonUrl;

+ (id)shareInstance;

- (void)adjustPopViewFram;
- (void)showWithURL:(id)a0 targetView:(id)a1 rectInTargetView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 showView:(id)a3;
- (void)dismissPopView;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
