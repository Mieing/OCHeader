@class NSString, NSMutableDictionary, NSRecursiveLock;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppPluginRouter : NSObject <IESLiveNativeAppPluginRouter> {
    NSRecursiveLock *_lock;
}

@property (retain, nonatomic) id<IESLiveNativeAppPluginContext> pluginContext;
@property (retain, nonatomic) NSMutableDictionary *namePluginDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)removePluginProtocol:(id)a0;
- (id)pluginWithProtocol:(id)a0;
- (id)currentPlugins;
- (void).cxx_destruct;
- (id)addPluginProtocol:(id)a0;

@end
