@class NSDictionary, NSString;

@interface TMBPEASimpleConfigErrorStrategy : NSObject <BDAbnormalCertStrategyProtocol>

@property (copy, nonatomic) NSDictionary *defaultConfig;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSDictionary *defaultStrategyConfig;
@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertDictToErrorStrategy:(id)a0;

- (void)updateConfig:(id)a0;
- (unsigned long long)strategyToHandleAbnormalCert:(id)a0 inEntryContext:(id)a1;
- (id)initWithErrorCode:(long long)a0 defaultConfig:(id)a1;
- (id)_defaultErrorStrategy;
- (id)_findStrategyOfError:(id)a0 dataType:(id)a1 inDict:(id)a2;
- (unsigned long long)_convertStrategyToAbnormalStrategy:(id)a0;
- (void).cxx_destruct;

@end
