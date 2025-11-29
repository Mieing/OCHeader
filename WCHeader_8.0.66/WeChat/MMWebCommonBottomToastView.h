@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface MMWebCommonBottomToastView : UIView

@property (copy, nonatomic) NSString *toastId;
@property (retain, nonatomic) UIButton *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *buttonMask;
@property (nonatomic) double extraBottomMargin;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ hideBlock;

+ (void)showToastWithId:(id)a0 title:(id)a1 iconData:(id)a2 subtitle:(id)a3 needArrow:(BOOL)a4 clickable:(BOOL)a5 inSuperView:(id)a6 clickBlock:(id /* block */)a7;
+ (void)showToastWithId:(id)a0 title:(id)a1 iconImage:(id)a2 iconData:(id)a3 subtitle:(id)a4 needArrow:(BOOL)a5 clickable:(BOOL)a6 extraBottomMargin:(double)a7 inSuperView:(id)a8 clickBlock:(id /* block */)a9 hideBlock:(id /* block */)a10;
+ (void)showToastWithId:(id)a0 title:(id)a1 iconImage:(id)a2 iconData:(id)a3 subtitle:(id)a4 needArrow:(BOOL)a5 clickable:(BOOL)a6 extraBottomMargin:(double)a7 inSuperView:(id)a8 reportBindBlock:(id /* block */)a9 clickBlock:(id /* block */)a10 hideBlock:(id /* block */)a11;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initView;
- (void)layoutSubviews;
- (void)addNotification;
- (void)removeNotification;
- (void)showToast;
- (void)hideToastWithAnimation:(BOOL)a0;
- (void)onToastClicked;
- (void)hideToast;
- (void)onToolViewChangeToMode:(unsigned long long)a0 Height:(double)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
