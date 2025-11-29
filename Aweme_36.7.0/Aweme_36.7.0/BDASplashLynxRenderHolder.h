@class AdInnovationContainerManager, NSDictionary, NSString;
@protocol BDASplashCommonRenderDelegate;

@interface BDASplashLynxRenderHolder : NSObject <AdInnovationContainerManagerDelegate, AdInnovationEventReporterProtocol, BDASplashCommonRenderProtocol>

@property (weak, nonatomic) id<BDASplashCommonRenderDelegate> delegate;
@property (retain, nonatomic) AdInnovationContainerManager *adInnovation;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCommonRenderHolderWithConfig:(id)a0;
+ (void)downloadResourceWithRenderData:(id)a0;

- (id)innovationAdExtraGlobalProps;
- (void)innovationAdCloseContainer;
- (void)innovationAd:(id)a0 clickParams:(id)a1;
- (void)innovationAd:(id)a0 notificationParams:(id)a1;
- (void)innovationAdRenderSuccess;
- (void)innovationAdTrackWithContext:(id)a0;
- (void)p_setupWithRenderConfig:(id)a0;
- (void)p_splashLynxClickWithParams:(id)a0;
- (void)p_renderSuccess;
- (void)p_splashTrackEventWithLabel:(id)a0 extra:(id)a1 adExtra:(id)a2;
- (void)p_renderFailed;
- (void).cxx_destruct;
- (void)destroy;
- (id)initWithConfig:(id)a0;
- (void)show;

@end
