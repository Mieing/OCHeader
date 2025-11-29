@class UIButton, NSString;

@interface AWEUGPendantCloseButton : UIView <AWEUGPendantCloseButtonProtocol>

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buttonTapped:(id)a0;
- (void)show;
- (void)updateWithModel:(id)a0;
- (void)setupButtonView;

@end
