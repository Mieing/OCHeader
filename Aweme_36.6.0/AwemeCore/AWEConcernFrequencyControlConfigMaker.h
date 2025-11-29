@class NSString;

@interface AWEConcernFrequencyControlConfigMaker : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL enableForeverStrategy;
@property (nonatomic) int maxShowTime;

- (id /* block */)configMaxShowTimeForExitForever;
- (void).cxx_destruct;
- (id /* block */)setup;
- (id)initWithKey:(id)a0;
- (id /* block */)configType;

@end
