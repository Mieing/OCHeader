@class OMJCDNBridgeService;
@protocol OMJTemplateServiceProvider;

@interface OMJTemplateServiceParams : NSObject

@property (readonly, nonatomic) id<OMJTemplateServiceProvider> instaMovieServiceProvider;
@property (readonly, nonatomic) id<OMJTemplateServiceProvider> camFunServiceProvider;
@property (readonly, nonatomic) OMJCDNBridgeService *cdnService;

- (id)initWithInstaMovieTemplateServiceProvider:(id)a0;
- (id)initWithCamFunTemplateServiceProvider:(id)a0;
- (id)initWithInstaMovieTemplateServiceProvider:(id)a0 camFunServiceProvider:(id)a1;
- (id)initWithInstaMovieTemplateServiceProvider:(id)a0 camFunServiceProvider:(id)a1 cdnService:(id)a2;
- (void).cxx_destruct;

@end
