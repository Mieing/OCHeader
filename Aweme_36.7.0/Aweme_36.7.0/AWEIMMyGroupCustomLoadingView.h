@class NSString, UIView;
@protocol IESIMParticleLoadingProtocol;

@interface AWEIMMyGroupCustomLoadingView : UIView <IESIMLoadingViewProtocol>

@property (retain, nonatomic) UIView<IESIMParticleLoadingProtocol> *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
