@class NSString, NSDictionary;

@interface NunkiStrategyInfo : NSObject

@property (copy, nonatomic) NSString *keyName;
@property (copy, nonatomic) NSString *owner;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *defaultConfig;
@property (copy, nonatomic) NSString *strategyClass;

+ (id)new;
+ (id /* block */)make;

- (id /* block */)withStrategyClass;
- (BOOL)valid;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithKeyName:(id)a0;

@end
