@class NSString, NSArray, UIImage, CAShapeLayer, BDImageView, BDASplashImageInfoModel, UIBezierPath, BDASplashInteractiveViewModel, UILabel, BDASplashBannerView;

@interface BDASplashInteractiveView : BDASplashComplianceBaseView <BDASplashEggsDelegate>

@property (retain, nonatomic) BDASplashInteractiveViewModel *viewModel;
@property (retain, nonatomic) CAShapeLayer *interactiveLayer;
@property (retain, nonatomic) UIBezierPath *currentPath;
@property (retain, nonatomic) BDImageView *guideImageView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) BDASplashBannerView *bannerView;
@property (nonatomic) long long eggsType;
@property (copy, nonatomic) NSArray *keyPointArray;
@property (nonatomic) struct CGPoint { double x; double y; } keyVector;
@property (nonatomic) unsigned long long keyPointIndex;
@property (nonatomic) long long styleEdition;
@property (nonatomic) double pointOffset;
@property (nonatomic) double slideDistance;
@property (nonatomic) double slideAngle;
@property (nonatomic) float scaling;
@property (retain, nonatomic) BDASplashImageInfoModel *guideImageInfoModel;
@property (nonatomic) struct CGSize { double width; double height; } guideImageSize;
@property (nonatomic) struct CGPoint { double x; double y; } guideImagePoint;
@property (nonatomic) BOOL isGestureEffective;
@property (retain, nonatomic) UIImage *filterImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGesture;
- (void)splashTrackEventWithLabel:(id)a0 extra:(id)a1 adExtra:(id)a2;
- (void)addCustomView;
- (void)updateSubviewLayout;
- (void)applyGreyThemeWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (BOOL)whetherPostponeSplashView;
- (void)eggsViewDidAppearWithParams:(id)a0;
- (void)eggsViewDidDisappearWithParams:(id)a0;
- (void)eggsViewBreakWithParams:(id)a0;
- (struct CGPoint { double x0; double x1; })makePointWithResource:(id)a0;
- (void)locateGuideImage;
- (struct CGPoint { double x0; double x1; })locateGuidePoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isRequirementWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 distance:(double)a2;
- (id)slideAdExtraData;
- (void)splashClickWithPoint:(struct CGPoint { double x0; double x1; })a0 isValid:(BOOL)a1 extra:(id)a2 adExtra:(id)a3;
- (void)splashLoadEggsView;
- (BOOL)isRequirementWithKeyPoint:(struct CGPoint { double x0; double x1; })a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 distance:(double)a3;
- (BOOL)isSameDirectionWithKeyPoint:(struct CGPoint { double x0; double x1; })a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)onPanGesture:(id)a0;
- (void)onDrawingPanGesture:(id)a0;
- (void)onLoosePanGesture:(id)a0;
- (void)onStrictPanGesture:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)updateConfig;
- (void)show;

@end
