@class NSString, UIScrollView, MMUIButton, WCElasticLayoutView;
@protocol MMSightCameraProModeOptionDelegate;

@interface MMSightCameraProModeOption : NSObject <UIScrollViewDelegate, WCElasticLayoutViewDelegate, MMSightCameraOptionProtocol>

@property (retain, nonatomic) MMUIButton *legacyIconButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (retain, nonatomic) WCElasticLayoutView *elasticLayoutView;
@property (retain, nonatomic) UIScrollView *svProModeOptionList;
@property (weak, nonatomic) id<MMSightCameraProModeOptionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WCElasticLayoutView *optionView;
@property (nonatomic) BOOL active;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotateToOrientation:(long long)a0;
- (void)updateProModeOptionList:(id)a0;
- (void)resetProModeOptionList;
- (void)manualTriggerClickSwitchButton;
- (void)elasticLayoutView:(id)a0 willShrinkWithAnimated:(BOOL)a1;
- (void)elasticLayoutView:(id)a0 didShrinkWithAnimated:(BOOL)a1;
- (void)elasticLayoutView:(id)a0 willExpandWithAnimated:(BOOL)a1;
- (void)elasticLayoutView:(id)a0 didExpandWithAnimated:(BOOL)a1;
- (void)_onClickSwitchButton;
- (void)_changeProModeIconBtnSelection:(BOOL)a0;
- (void)_resetAllOptionViewIfNeeded;
- (void)_setAlpha:(double)a0 forView:(id)a1 animated:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)_initLegacyIconButton;
- (void)_initViews;
- (void).cxx_destruct;

@end
