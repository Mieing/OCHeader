@class NSArray, NSMutableDictionary, BDLOCSonicInstance, IESLiveGameOpenPlatformPiperInterceptor;

@interface IESLiveGameOpenPlatformSonicBridge : NSObject

@property (retain, nonatomic) IESLiveGameOpenPlatformPiperInterceptor *interceptor;
@property (retain, nonatomic) NSMutableDictionary *methods;
@property (retain, nonatomic) NSArray *mediaMethods;
@property (weak, nonatomic) BDLOCSonicInstance *sonicGameInstance;

- (void)invokeEvent:(id)a0 params:(id)a1;
- (void)executeMethodWithMessage:(id)a0 callback:(id /* block */)a1;
- (id)initWithInterceptor:(id)a0;
- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1;
- (void).cxx_destruct;

@end
