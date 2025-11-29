@class AWEIMLynxCardContentProps, NSString, UIView;
@protocol AWEEnterpriseIMMessageViewProtocol;

@interface AWEIMLynxCardContentView : UIView

@property (retain, nonatomic) UIView<AWEEnterpriseIMMessageViewProtocol> *enterpriseLynxEngine;
@property (retain, nonatomic) AWEIMLynxCardContentProps *props;
@property (retain, nonatomic) UIView *lynxPlaceholderView;
@property (retain, nonatomic) UIView *hookTapGestureView;
@property (copy, nonatomic) NSString *messageID;

- (void)lynxDidEndDisplaying;
- (void)updateWithProps:(id)a0;
- (void)p_insertSubviews;
- (void)p_updateLynxEngineLayout;
- (void)p_makeEnterpriseLynxEngineWithType:(long long)a0;
- (void)p_updateLynxEngineView;
- (void)p_updateHookTapGestureView;
- (void)p_updateCommonAttributesWithView:(id)a0;
- (void)p_didTapHookTapGestureView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
