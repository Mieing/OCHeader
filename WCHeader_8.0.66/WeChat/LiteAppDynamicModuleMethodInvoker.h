@class NSString, NSInvocation;

@interface LiteAppDynamicModuleMethodInvoker : NSObject

@property (retain, nonatomic) id target;
@property (retain, nonatomic) NSInvocation *invocation;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int appUuid;
@property (nonatomic) BOOL isFromView;

+ (id)invokerWithClass:(id)a0 method:(id)a1;
+ (id)invokerWithInstance:(id)a0 method:(id)a1;

- (void)setCallback:(id)a0;
- (void)setViewController:(id)a0;
- (void)setArguments:(id)a0;
- (void)invoke;
- (id)getReturnValue;
- (void).cxx_destruct;

@end
