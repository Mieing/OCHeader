@class NSString;

@interface AWEIMDecisionNumberArrayNodeResolver : NSObject <AWEIMDecisionNodeResolverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringToNumberArray:(id)a0;

- (BOOL)resolveDecisionNode:(id)a0 context:(id)a1;

@end
