@class NSString, NSMutableArray;

@interface BDWebViewOfflineManager : NSObject <IESFalconCustomInterceptor>

@property (class, nonatomic) BOOL interceptionEnable;

@property (retain, nonatomic) NSMutableArray *customUrlProtocols;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCustomInterceptorList:(id)a0;
+ (void)unregisterCustomInterceptorList:(id)a0;
+ (void)registerCustomInterceptor:(id)a0;
+ (void)unregisterCustomInterceptor:(id)a0;
+ (id)sharedInstance;

- (id)falconMetaDataForURLRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
