@class UILabel, NSString, BDImageView;

@interface IESGCPCGDefaultLoadingView : UIView <IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) BDImageView *webpLogoView;
@property (retain, nonatomic) BDImageView *webpProgressView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)updateOrientationStatus:(long long)a0;
- (void)showWebpViews;
- (void)startWebpLogoAnimation:(id /* block */)a0;
- (void)hideProgressToShowTipLabelWithText:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupSubviews;

@end
