@class NSString;

@interface IESECLiveAccessorImpl : NSObject <IESECLiveAccessorInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveSDKVersion;
- (void)recordMegaObject:(id)a0 withKey:(id)a1;
- (id)megaObjectWithKey:(id)a0;
- (void)requireAuthWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)requireRealNameAuthWithCompletion:(id /* block */)a0;
- (id)liveECAccessor;
- (id)safeLiveECAccessor;

@end
