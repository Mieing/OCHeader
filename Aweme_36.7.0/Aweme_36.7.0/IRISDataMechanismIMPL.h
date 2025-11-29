@class NSString;

@interface IRISDataMechanismIMPL : NSObject <IRISDataMechanism>

@property (retain, nonatomic) NSString *mechanismKey;
@property (nonatomic) double ttl;
@property (nonatomic) unsigned long long limitEventLength;
@property (nonatomic) unsigned long long limitRawBodyLength;
@property (nonatomic) unsigned long long limitRawBodyEvent;

- (void).cxx_destruct;
- (void)apply:(id)a0;
- (id)init;

@end
