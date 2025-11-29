@class NSDictionary, NSString;

@interface AWEIMDecisionConversationExtNodeResolver : NSObject <AWEIMDecisionNodeResolverProtocol>

@property (copy, nonatomic) NSDictionary *resolveDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)resolveDecisionNode:(id)a0 context:(id)a1;
- (BOOL)resolveWithExtDecisionNode:(id)a0;
- (void).cxx_destruct;

@end
