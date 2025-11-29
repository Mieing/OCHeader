@class NSString, UIImageView, CJPayAccountInsuranceTipView, UIView, BDImageView;

@interface CJPayNewDouyinOpenDeskLoadingView : UIView <CJPayScreenLoadingViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDImageView *safeLogoImgView;
@property (retain, nonatomic) UIImageView *descImgView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dismissWithAnimated:(BOOL)a0;
+ (void)showLoadingOnView:(id)a0;
+ (id)sharedView;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)showLoadingOnView:(id)a0;
- (id)repeatGifUrl;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
