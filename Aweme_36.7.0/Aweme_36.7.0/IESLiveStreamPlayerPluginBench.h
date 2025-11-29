@class NSCache, NSString, IESLiveStreamPlayerPluginContext, IESLiveStreamPlayerPluginsHolder;
@protocol IESLiveStreamPlayerBizHostProtocol;

@interface IESLiveStreamPlayerPluginBench : NSObject <IESLiveStreamPlayerPluginEventProtocol, IESLiveStreamPlayerPluginFunctionProtocol>

@property (weak, nonatomic) id<IESLiveStreamPlayerBizHostProtocol> bizHost;
@property (retain, nonatomic) IESLiveStreamPlayerPluginContext *context;
@property (retain, nonatomic) IESLiveStreamPlayerPluginsHolder *pluginHolder;
@property (retain, nonatomic) NSCache *pluginExecSELCache;
@property (retain, nonatomic) NSCache *protocolCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)handleNoSelector:(id)a0;
- (void)p_resetCache;
- (void)activatePluginInstances:(id)a0;
- (id)activatePluginWith:(id)a0 configsInfo:(id)a1;
- (id)p_fullPluginName:(id)a0;
- (BOOL)isValidPluginMetaInfo:(id)a0;
- (void)p_showDebugToastTip:(id)a0;
- (BOOL)hasMethodSignatureOfProtocol:(id)a0 with:(SEL)a1;
- (BOOL)handleEventWithInvocation:(id)a0;
- (id)pluginArrayForSelector:(SEL)a0;
- (id)initWithBizHost:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)activate;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
