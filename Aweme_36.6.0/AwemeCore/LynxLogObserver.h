@interface LynxLogObserver : NSObject

@property (copy, nonatomic) id /* block */ logFunction;
@property (nonatomic) long long minLogLevel;
@property (nonatomic) BOOL shouldFormatMessage;
@property (nonatomic) long long acceptSource;
@property (nonatomic) long long acceptRuntimeId;

- (id)initWithLogFunction:(id /* block */)a0 minLogLevel:(long long)a1;
- (void).cxx_destruct;

@end
