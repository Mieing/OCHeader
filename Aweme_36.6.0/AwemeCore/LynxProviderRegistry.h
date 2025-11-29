@class NSMutableDictionary;

@interface LynxProviderRegistry : NSObject {
    NSMutableDictionary *_providers;
}

- (void)addLynxResourceProvider:(id)a0 provider:(id)a1;
- (id)getResourceProviderByKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
