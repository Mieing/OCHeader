@class NSString, NSArray, NSMutableSet;

@interface WxaRouterConfig : NSObject

@property (retain, nonatomic) NSString *entryPoint;
@property (retain, nonatomic) NSString *initialRoute;
@property (retain, nonatomic) NSArray *entryPointArgs;
@property (retain, nonatomic) NSMutableSet *consumerSet;
@property (retain, nonatomic) NSMutableSet *pluginSet;
@property (retain, nonatomic) NSArray *dartVmArgs;

- (id)init;
- (void)addMethodConsumer:(id)a0;
- (void)removeMethodConsumer:(id)a0;
- (void)addFlutterPlugin:(id)a0;
- (void).cxx_destruct;

@end
