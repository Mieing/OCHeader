@class NSString;

@interface AWEIMDecisionStringArrayNodeResolver : NSObject <AWEIMDecisionNodeResolverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)resolveDecisionNode:(id)a0 context:(id)a1;
- (BOOL)p_resolveDecisionNodeOPT:(id)a0 context:(id)a1;

@end
