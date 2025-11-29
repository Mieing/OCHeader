@class NSString;
@protocol IESIMDBRealTimeUpdatePluginInjectorProtocolDelegate;

@interface IESIMDBConvRealTimeUpdateInjector : NSObject <IESIMDBRealTimeUpdatePluginInjectorProtocolDelegate, IESIMDBRealTimeUpdatePluginInjectorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMDBRealTimeUpdatePluginInjectorProtocolDelegate> delegate;

- (id)p_realTimeUpdateManger;
- (id)realUpdatePluginsWithContext:(id)a0;
- (void).cxx_destruct;

@end
