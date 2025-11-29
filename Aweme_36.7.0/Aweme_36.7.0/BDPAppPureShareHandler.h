@class NSString;

@interface BDPAppPureShareHandler : NSObject <BDPShareEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedHandler;

- (void)handleShareForChannel:(id)a0 withParams:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
- (void)tokenShareWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)shareAppInLive:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)shareAppInCustomizedChannel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)defaultShareWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)trackWithShareError:(id)a0 uniqueID:(id)a1 channel:(id)a2;
- (id)parseErrorWithError:(id)a0 model:(id)a1;
- (void)trackCompletedWithModel:(id)a0 uniqueID:(id)a1 result:(long long)a2 channel:(id)a3 error:(id)a4 info:(id)a5;

@end
