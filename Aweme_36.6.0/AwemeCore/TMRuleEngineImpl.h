@class NSString;

@interface TMRuleEngineImpl : NSObject <PNSRuleEngineProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validateParams:(id)a0;
- (void)registerFunc:(id)a0;
- (id)contextInfo;

@end
