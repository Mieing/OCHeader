@class NSString;

@interface EAccountCTEConfig : NSObject

@property (copy, nonatomic) NSString *timestampDomain;
@property (copy, nonatomic) NSString *preLoginDomain;
@property (copy, nonatomic) NSString *uploadLogDomain;

- (id)initWithDefaultConfig;
- (void).cxx_destruct;

@end
