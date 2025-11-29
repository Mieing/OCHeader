@class UIImageView, UILabel, NSString;

@interface IESGCPXPlayGameNetworkLatencyTipsView : UIView <IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)updateOrientationStatus:(long long)a0;
- (BOOL)needKeepInFront;
- (void)updateNetworkLatency:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setTintColor:(id)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
