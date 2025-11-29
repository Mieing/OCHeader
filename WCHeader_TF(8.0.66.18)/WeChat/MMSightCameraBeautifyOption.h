@class MMUIButton, NSArray, NSString, NSMutableArray, WCElasticLayoutView;
@protocol MMSightCameraBeautifyOptionDelegate;

@interface MMSightCameraBeautifyOption : NSObject <MMSightCameraOptionProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (retain, nonatomic) WCElasticLayoutView *elasticLayoutView;
@property (retain, nonatomic) MMUIButton *btnBeautifyIcon;
@property (retain, nonatomic) NSMutableArray *beautyBtnArray;
@property (retain, nonatomic) NSArray *beautyInfos;
@property (nonatomic) long long currentSelectIndex;
@property (nonatomic) long long currentOrientation;
@property (weak, nonatomic) id<MMSightCameraBeautifyOptionDelegate> delegate;
@property (readonly, nonatomic) WCElasticLayoutView *optionView;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotateToOrientation:(long long)a0;
- (id)currentSelectedBeautyItem;
- (void)_onClickIconView;
- (void)onClickBeautyBtn:(id)a0;
- (void)_transformViewsToIdentityAnimated:(BOOL)a0;
- (void)_transformViewsToOrientation:(long long)a0 animated:(BOOL)a1;
- (void)_initViews;
- (void).cxx_destruct;

@end
