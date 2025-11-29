@class NSString;

@interface AWEPigeonJoinGroupImpl : NSObject <AWEIronManPigeonProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pigeonMethodName;
+ (id)create;

- (void)callMethod:(id)a0 arguments:(id)a1 completion:(id /* block */)a2;
- (void)joinGroupWithParams:(id)a0 completion:(id /* block */)a1;
- (id)errMsgWithErrCode:(long long)a0 errString:(id)a1;

@end
