@class NSString, NSArray, NSDictionary;

@interface TMNetworkContentDetectRuleResultMock : NSObject <PNSRuleResultProtocol>

@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSArray *ruleSetNames;
@property (copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSDictionary *usedParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
