@class NSString, UIView, MMUIButton, WCElasticLayoutView;
@protocol MMSightCameraAspectRatioOptionDelegate;

@interface MMSightCameraAspectRatioOption : NSObject <MMSightCameraOptionProtocol>

@property (nonatomic) long long currentType;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UIView *backGroundMaskView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (retain, nonatomic) WCElasticLayoutView *elasticLayoutView;
@property (retain, nonatomic) MMUIButton *iconButton;
@property (retain, nonatomic) MMUIButton *ratioButton_1_1;
@property (retain, nonatomic) MMUIButton *ratioButton_4_3;
@property (retain, nonatomic) MMUIButton *ratioButton_16_9;
@property (nonatomic) long long currentOrientation;
@property (weak, nonatomic) id<MMSightCameraAspectRatioOptionDelegate> delegate;
@property (readonly, nonatomic) WCElasticLayoutView *optionView;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aspectRatioTitleWithType:(long long)a0;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotateToOrientation:(long long)a0;
- (void)_onClickIconView;
- (void)_onClickRatioButton_1_1;
- (void)_onClickRatioButton_4_3;
- (void)_onClickRatioButton_16_9;
- (void)_onAspectRatioTypeChangedTo:(long long)a0;
- (void)_transformViewsToIdentityAnimated:(BOOL)a0;
- (void)_transformViewsToOrientation:(long long)a0 animated:(BOOL)a1;
- (void)_updateIconButtonWithTitle:(id)a0 accessibilityLabel:(id)a1;
- (void)_initViews;
- (void)_initMaskView;
- (void).cxx_destruct;

@end
