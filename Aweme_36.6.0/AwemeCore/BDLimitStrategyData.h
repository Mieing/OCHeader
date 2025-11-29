@class NSDictionary, NSString;

@interface BDLimitStrategyData : NSObject <BDPolicyCertConfig>

@property (copy, nonatomic) NSDictionary *dict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)certConfig;
- (void).cxx_destruct;

@end
