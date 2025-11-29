@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDTuringServiceCenter : NSObject <BDTuringVerifyHandler>

@property (retain, nonatomic) NSMutableDictionary *services;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCenter;

- (void)unregisterAllServices;
- (void)popVerifyViewWithModel:(id)a0;
- (id)serviceForName:(id)a0 appID:(id)a1;
- (id)getRegisterServiceInfo;
- (void).cxx_destruct;
- (id)init;
- (void)registerService:(id)a0;
- (void)unregisterService:(id)a0;

@end
