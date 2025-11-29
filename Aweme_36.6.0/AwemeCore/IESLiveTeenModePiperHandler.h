@class NSString;
@protocol IESLiveCustomConfig;

@interface IESLiveTeenModePiperHandler : NSObject <IESLivePiperHandlerProtocol, IESLiveAnnieXBridgeMethodsDependencyProtocol>

@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)isTeenModeCallHandler;
- (void).cxx_destruct;

@end
