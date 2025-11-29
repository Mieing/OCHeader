@class NSString, NSArray, NSInvocation;

@interface StingerParams : NSObject <StingerParams>

@property (retain, nonatomic) NSString *types;
@property (nonatomic) SEL sel;
@property (nonatomic) void /* function */ *originalIMP;
@property (nonatomic) void **args;
@property (retain, nonatomic) NSArray *argumentTypes;
@property (retain, nonatomic) NSArray *arguments;
@property (retain, nonatomic) NSInvocation *invocation;
@property (nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasNOEscapeParams;

- (void)invokeAndGetOriginalRetValue:(void *)a0;
- (void)preGenerateInvocationIfNeed;
- (void)st_genarateArguments;
- (void)_internalGenerateInvocation;
- (id)st_argumentWithType:(id)a0 index:(unsigned long long)a1;
- (id)slf;
- (id)initWithType:(id)a0 originalIMP:(void /* function */ *)a1 sel:(SEL)a2 args:(void **)a3 argumentTypes:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (id)typeEncoding;

@end
