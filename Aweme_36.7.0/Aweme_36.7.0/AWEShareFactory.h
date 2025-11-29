@class NSString, NSMutableDictionary;

@interface AWEShareFactory : NSObject <AWEShareFactory>

@property (retain, nonatomic) NSMutableDictionary *channelRegistry;
@property (retain, nonatomic) NSMutableDictionary *functionRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFactory;

- (void)registerChannelClass:(Class)a0 forType:(id)a1;
- (void)registerChannelClass:(Class)a0 forTypes:(id)a1;
- (id)channelsForTypes:(id)a0;
- (id)channelForType:(id)a0;
- (void)registerFunctionClass:(Class)a0 forType:(id)a1;
- (id)functionForType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
