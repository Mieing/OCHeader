@class UILabel, NSString;

@interface IESGCPXPlayGameToastView : UIView <IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)setupAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 duration:(double)a2;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;

@end
