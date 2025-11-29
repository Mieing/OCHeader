@class NSString;

@interface ICHShieldFixFBSSceneSnapshotANR : NSObject <ICHShieldAbilityInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithConfig:(id)a0 completion:(id /* block */)a1;

- (id)initWithType:(unsigned long long)a0 context:(id)a1 responder:(id)a2;
- (id)_initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id)a3;
- (id)_initWithFireInterval:(double)a0 repeatInterval:(double)a1 leewayInterval:(double)a2 queue:(id)a3 handler:(id /* block */)a4;

@end
