@class NSString, UIView;

@interface IESECPopupView : UIView <IESECPopupViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isDismissing;
@property (copy, nonatomic) id /* block */ contentConfig;
@property (nonatomic) BOOL dismissWhenTapBlank;
@property (copy, nonatomic) id /* block */ customShowAnimation;
@property (copy, nonatomic) id /* block */ customDismissAnimation;
@property (copy, nonatomic) id /* block */ viewDidShow;
@property (copy, nonatomic) id /* block */ viewDidDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewWithContentConfig:(id /* block */)a0;

- (BOOL)canPopup;
- (void)dismissWhenCompleted:(id /* block */)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setup;
- (void)showInView:(id)a0;
- (BOOL)canDismiss;

@end
