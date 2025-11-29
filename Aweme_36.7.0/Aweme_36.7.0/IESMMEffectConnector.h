@class IESMMEffectConfig, NSString;
@protocol IESMMEffectConnectorDelegate;

@interface IESMMEffectConnector : NSObject <VEEffectMessageReceiver, IESMMEffectMessageProtocol>

@property (retain, nonatomic) IESMMEffectConfig *config;
@property (nonatomic) void *renderHandle;
@property (weak, nonatomic) id<IESMMEffectConnectorDelegate> delegate;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessageToEffect:(id)a0;
- (void)bef_effect_clear_event;
- (void)messageCenter:(id)a0 didReceiveMessage:(id)a1;
- (id)initWithConfig:(id)a0 effectHandle:(void *)a1;
- (void)ntf_messageCenter:(id)a0;
- (void)destory;
- (void)active;
- (void).cxx_destruct;
- (void)inactive;
- (void)dealloc;

@end
