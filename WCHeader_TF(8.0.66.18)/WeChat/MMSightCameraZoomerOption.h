@class MMCameraZoomFactorInfo, NSArray, NSString, MMUIButton, WCElasticLayoutView;
@protocol MMSightCameraZoomerOptionDelegate;

@interface MMSightCameraZoomerOption : NSObject <MMSightCameraOptionProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (retain, nonatomic) WCElasticLayoutView *elasticLayoutView;
@property (retain, nonatomic) MMCameraZoomFactorInfo *zoomFactorInfo;
@property (retain, nonatomic) NSArray *zoomerBtnList;
@property (weak, nonatomic) id<MMSightCameraZoomerOptionDelegate> delegate;
@property (retain, nonatomic) MMUIButton *iconButton;
@property (readonly, nonatomic) WCElasticLayoutView *optionView;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotateToOrientation:(long long)a0;
- (void)updateCurrentZoomFactor:(double)a0;
- (void)relayoutSelectedZoomerBtnAtCenter;
- (void)_loadCameraZoomFactorInfo;
- (id)_convertFactorTitleFromCameraFactor:(double)a0;
- (double)visualFactorFromCameraFactor:(double)a0;
- (void)_onClickIconButton;
- (void)_onIconButtonChangedSelectionTo:(BOOL)a0;
- (void)_onClickZoomFactorBtn:(id)a0;
- (void)_onZoomerBtn:(id)a0 changedSelectionTo:(BOOL)a1 manually:(BOOL)a2;
- (void)_relayoutZoomerBtnAtCenter:(id)a0;
- (void)_initViews;
- (id)_createZoomerBtnWithTitle:(id)a0;
- (void)_updateIconButtonTitle:(id)a0;
- (void)_updateTitle:(id)a0 forZoomerBtn:(id)a1;
- (void).cxx_destruct;

@end
