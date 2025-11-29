@class NSString;

@interface BDECIMTrackServiceImpl : NSObject <BDECIMTrackService_I>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)exceptionTag:(id)a0 type:(id)a1 errorMsg:(id)a2 logID:(id)a3 stackTrace:(id)a4;
- (void)errorTag:(id)a0 type:(id)a1 errorMsg:(id)a2 logID:(id)a3 stackTrace:(id)a4 extra:(id)a5;
- (void)resultTag:(id)a0 isSucceed:(BOOL)a1 type:(id)a2 errorMsg:(id)a3 logID:(id)a4 stackTrace:(id)a5 extra:(id)a6;
- (void)errorTag:(id)a0 type:(id)a1 errorMsg:(id)a2;
- (void)errorTag:(id)a0 type:(id)a1 errorMsg:(id)a2 logID:(id)a3 stackTrace:(id)a4;
- (void)errorTag:(id)a0;

@end
