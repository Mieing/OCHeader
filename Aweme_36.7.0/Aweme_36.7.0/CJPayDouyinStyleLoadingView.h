@class CJPayLoadingStyleInfo, NSString, UILabel, UIView, BDImageView;

@interface CJPayDouyinStyleLoadingView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *logoFieldView;
@property (retain, nonatomic) BDImageView *logoPreGifView;
@property (retain, nonatomic) BDImageView *logoCompleteGifView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;
@property (copy, nonatomic) NSString *customGifUrlStr;

+ (id)sharedView;

- (void)showLoadingWithTitle:(id)a0;
- (void)animateBeforeDismissing;
- (id)repeatGifUrl;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLoadingTitle:(id)a0;
- (void)showLoading;

@end
