@class NSDictionary;

@interface AWEBootBizSignalConfig : NSObject

@property (copy, nonatomic) NSDictionary *signalMap;
@property (nonatomic) unsigned long long currentCondition;

+ (id)shareInstance;

- (void)setupWithConfig:(id)a0;
- (void)postSignalIfNeeded;
- (void)updateCondition:(unsigned long long)a0;
- (void).cxx_destruct;

@end
