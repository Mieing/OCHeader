@class NSDictionary, NSString;
@protocol AWESearchHomePageHybridNavitveCardHandlersManagerDelegate;

@interface AWESearchHomePageHybridNavitveCardHandlersManager : NSObject <CachalotMessageHandler, AWESearchHomePageHybridNavitveCardHandlersManagerProtocol>

@property (copy, nonatomic) NSDictionary *configMap;
@property (weak, nonatomic) id<AWESearchHomePageHybridNavitveCardHandlersManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMessage:(id)a0 callback:(id /* block */)a1;
- (void)bindHandlerWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
