@class NSDictionary, NSString;

@interface TMRuleSingleResult : NSObject <PNSSingleRuleResultProtocol>

@property (copy, nonatomic) NSDictionary *conf;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
