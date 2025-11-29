@class NSString;

@interface IESECPreconnectTask : NSObject

@property (nonatomic) unsigned long long counter;
@property (nonatomic) unsigned long long expirationSecs;
@property (nonatomic) unsigned long long delaySecs;
@property (copy, nonatomic) NSString *host;

- (void)updatePreconnectConfig:(id)a0 andBizScope:(unsigned long long)a1;
- (id)initWithHost:(id)a0 preconnectConfig:(id)a1 andBizScope:(unsigned long long)a2;
- (void).cxx_destruct;

@end
