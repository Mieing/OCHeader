@interface VmsdkLogObserver : NSObject

@property (copy, nonatomic) id /* block */ logFunction;
@property (nonatomic) long long minLogLevel;

+ (id)shareInstance;

- (id)initWithLogFunction:(id /* block */)a0 minLogLevel:(long long)a1;
- (void).cxx_destruct;

@end
