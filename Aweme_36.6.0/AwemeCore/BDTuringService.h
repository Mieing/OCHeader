@class NSString;

@interface BDTuringService : NSObject <BDTuringService>

@property (copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerService;
- (id)initWithAppID:(id)a0;
- (void)unregisterService;
- (void).cxx_destruct;
- (BOOL)serviceAvailable;

@end
