@class NSString, IESGCPSKCombinedEventList;

@interface IESGCPSKCombined : NSObject <IESGCPSKCombinedInterface>

@property (retain, nonatomic) IESGCPSKCombinedEventList *eventList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openStoreProductUsingCombinedPluginWithContext:(id)a0 callBack:(id)a1;
- (void)sendEvent:(id)a0 toPlugins:(id)a1;
- (void).cxx_destruct;

@end
