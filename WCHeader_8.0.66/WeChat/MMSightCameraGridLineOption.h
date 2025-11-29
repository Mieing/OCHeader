@class NSString, UIView, MMUIButton, WCElasticLayoutView;
@protocol MMSightCameraGridLineOptionDelegate;

@interface MMSightCameraGridLineOption : NSObject <MMSightCameraOptionProtocol>

@property (retain, nonatomic) UIView *gridMaskView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (retain, nonatomic) WCElasticLayoutView *elasticLayoutView;
@property (retain, nonatomic) MMUIButton *btnGridLineIcon;
@property (weak, nonatomic) id<MMSightCameraGridLineOptionDelegate> delegate;
@property (readonly, nonatomic) WCElasticLayoutView *optionView;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotateToOrientation:(long long)a0;
- (void)_onClickIconView;
- (void)_changeGridLineToSelected:(BOOL)a0;
- (void)_initViews;
- (void)_initGridLineMaskView;
- (void).cxx_destruct;

@end
