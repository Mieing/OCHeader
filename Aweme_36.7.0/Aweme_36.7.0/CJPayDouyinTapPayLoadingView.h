@class UIImageView, NSString, UIView;

@interface CJPayDouyinTapPayLoadingView : UIView <CJPayScreenLoadingViewProtocol>

@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UIView *loadingBallView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dismissWithAnimated:(BOOL)a0;
+ (void)showLoadingOnView:(id)a0;
+ (id)sharedView;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)showLoadingOnView:(id)a0;
- (double)logoViewScale;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
