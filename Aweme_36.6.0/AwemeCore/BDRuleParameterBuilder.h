@class NSString;

@interface BDRuleParameterBuilder : NSObject <BDRuleParameterBuilderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)checkResult:(id)a0 builder:(id)a1 error:(id *)a2;
- (BOOL)__checkValueType:(id)a0 type:(unsigned long long)a1;
- (id)generateValueFor:(id)a0 extra:(id)a1 error:(id *)a2;

@end
