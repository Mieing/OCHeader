@class NSString, WCElasticLayoutView, MMUIButton;
@protocol MMSightCameraFlashlightOptionDelegate;

@interface MMSightCameraFlashlightOption : NSObject <MMSightCameraOptionProtocol>

@property (retain, nonatomic) MMUIButton *legacyIconButton;
@property (retain, nonatomic) MMUIButton *topBarButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (retain, nonatomic) WCElasticLayoutView *elasticLayoutView;
@property (retain, nonatomic) MMUIButton *btnFlashlightIcon;
@property (weak, nonatomic) id<MMSightCameraFlashlightOptionDelegate> delegate;
@property (readonly, nonatomic) WCElasticLayoutView *optionView;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initLegacyWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotateToOrientation:(long long)a0;
- (void)_onClickIconView;
- (void)onClickTopBarBtn:(id)a0;
- (void)_onFlashlightSelectionChanged;
- (void)_initViews;
- (void)_initLegacyIconButton;
- (void).cxx_destruct;

@end
