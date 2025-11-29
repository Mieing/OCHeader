@class NSString;

@interface AWELuckySDKMotionService : HTSService <BDUGServiceProtocol, HTSService, BDMotionServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceProtocol;

- (void)unRegisterWithIdentifier:(id)a0;
- (void)registerMotionItemConfig:(id)a0 identifier:(id)a1;

@end
