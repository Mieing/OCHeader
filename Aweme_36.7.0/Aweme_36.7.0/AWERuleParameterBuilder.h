@class NSString;
@protocol BDRuleParameterBuilderProtocol;

@interface AWERuleParameterBuilder : NSObject <AWERuleParameterBuilderProtocol>

@property (retain, nonatomic) id<BDRuleParameterBuilderProtocol> builder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateValueFor:(id)a0 extra:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;

@end
