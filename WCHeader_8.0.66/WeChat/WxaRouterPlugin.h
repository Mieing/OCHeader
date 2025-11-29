@class SafeMethodChannel, NSMutableSet, NSString;

@interface WxaRouterPlugin : NSObject <FlutterPlugin>

@property (retain, nonatomic) SafeMethodChannel *channel;
@property (retain, nonatomic) NSMutableSet *consumers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginName:(id)a0;
+ (id)registerRegistrar:(id)a0;
+ (void)registerWithRegistrar:(id)a0;

- (id)init;
- (void)addMethodConsumer:(id)a0;
- (void)removeMethodConsumer:(id)a0;
- (void)setupChannelWithRegistrar:(id)a0;
- (void)invokeMethod:(id)a0 arguments:(id)a1;
- (void)invokeMethod:(id)a0 arguments:(id)a1 result:(id /* block */)a2;
- (void).cxx_destruct;

@end
