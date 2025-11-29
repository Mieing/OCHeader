@class NSSet, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDPUnsafeParamsRequestServiceIG : NSObject <BDPUnsafeParamsRequestServiceIG>

@property (retain, nonatomic) NSSet *unsafeParams;
@property (retain, nonatomic) NSSet *allowUrlList;
@property (retain, nonatomic) NSMutableDictionary *uniqueIDStatusList;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableDictionary *lastUnsafeTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)checkUnsafeParamsWithObjects:(id)a0 uniqueID:(id)a1 url:(id)a2;
- (id)p_checkAndFindOutTheUnsafeParamValueWithObjects:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
