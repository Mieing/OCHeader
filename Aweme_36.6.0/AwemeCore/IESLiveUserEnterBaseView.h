@class NSString;

@interface IESLiveUserEnterBaseView : UIView <HTSLiveUserEnterViewProtocol, CAAnimationDelegate>

@property (nonatomic) double moveRate;
@property (copy, nonatomic) id /* block */ onAnimationEnd;
@property (copy, nonatomic) id /* block */ onTouchViewTap;
@property (copy, nonatomic) id /* block */ checkComboNode;
@property (copy, nonatomic) id /* block */ onComboFinished;
@property (copy, nonatomic) id /* block */ onViewDismissed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startEnterAnimationOn:(id)a0 shouldReduceFPS:(BOOL)a1 stayTime:(double)a2;
- (BOOL)needHideFromRight;
- (void)startShowingAnimationOn:(id)a0 shouldReduceFPS:(BOOL)a1 stayTime:(double)a2;
- (void)startLeavingAnimationOn:(id)a0 shouldReduceFPS:(BOOL)a1;
- (void)updateWithEnterMessageNode:(id)a0;
- (void)removeAllFromSuperView;
- (BOOL)needEnterFromLeft;
- (void)startAnimationFromLeft:(id)a0 withKey:(id)a1;
- (void)startEnterAnimationOn:(id)a0 shouldReduceFPS:(BOOL)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;

@end
