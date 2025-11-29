@class AWEPOICraftsmanRedirectService, AWEPOIReflowResourceService, NSString, AWEPOIWebRedirectService;

@interface AWEPOIRouterInterceptor : NSObject <AWERouterInterceptorDelegate>

@property (retain, nonatomic) AWEPOIReflowResourceService *reflowService;
@property (retain, nonatomic) AWEPOIWebRedirectService *webRedirectService;
@property (retain, nonatomic) AWEPOICraftsmanRedirectService *craftsmanCodeRedirectService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInterceptor;

@end
