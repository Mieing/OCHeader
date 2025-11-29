@class NSString, AWEUILoadingView;

@interface AWEPaidStreamLoadingView : UIView <AWEUILoadingViewDelegate>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToSuperview:(id)a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
