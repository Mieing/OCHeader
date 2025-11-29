@class NSDictionary, BDASplashCommonTwistModel, NSString;
@protocol BDASplashCommonRenderProtocol;

@interface BDASplashCommonRenderView : BDASplashComplianceBaseSlideView <BDASplashCommonRenderDelegate>

@property (retain, nonatomic) id<BDASplashCommonRenderProtocol> commonRender;
@property (nonatomic) BOOL enableGesture;
@property (nonatomic) long long renderType;
@property (nonatomic) long long complianceType;
@property (copy, nonatomic) NSDictionary *gestureData;
@property (nonatomic) double loadStartTime;
@property (nonatomic) BOOL isRenderEnded;
@property (retain, nonatomic) BDASplashCommonTwistModel *twistModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupTimer;
- (void)p_setupConfig;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)p_setupCommonRender;
- (void)p_loadGestureView;
- (void)renderFailedWithAsync:(BOOL)a0;
- (id)p_globalProps;
- (void)p_loadSlideGesture;
- (void)p_loadOtherClickGesture;
- (void)p_loadTwistGesture;
- (void)commonClickWithParams:(id)a0;
- (id)p_addExtraData:(id)a0;
- (void)renderSuccess;
- (void)commonTrackEventWithLabel:(id)a0 extra:(id)a1 adExtra:(id)a2;
- (void).cxx_destruct;
- (void)stop;
- (void)show;

@end
