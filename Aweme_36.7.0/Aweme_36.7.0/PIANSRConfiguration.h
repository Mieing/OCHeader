@class NSDictionary, PIAContainerRegisterEnv, NSString;

@interface PIANSRConfiguration : NSObject

@property (retain, nonatomic) PIAContainerRegisterEnv *env;
@property (retain, nonatomic) NSDictionary *context;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) NSString *customUserAgent;
@property (copy, nonatomic) NSString *containerNamespace;
@property (nonatomic) long long maxExecuteTime;

- (void).cxx_destruct;

@end
