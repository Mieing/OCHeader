@class NSArray, IESLiveExecutionMessageDispatcher, NSString;

@interface IESLiveContainerBasePlugin : NSObject <IESLiveContainerPluginProtocol, IESLiveExecutionMessageHandlerProtocol>

@property (retain, nonatomic) NSArray *subscribeMsgTypes;
@property (weak, nonatomic) IESLiveExecutionMessageDispatcher *messageDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)pluginShouldActive;

- (void)didLoad:(id)a0;
- (void)willDestroy:(id)a0;
- (void)subscribeMessageTypes:(id)a0;
- (void)handleMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;

@end
