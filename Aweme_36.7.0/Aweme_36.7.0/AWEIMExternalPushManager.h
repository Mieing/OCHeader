@class NSString;

@interface AWEIMExternalPushManager : NSObject <AWEIMExternalPushManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)landingStrategyWithUrlString:(id)a0;
- (BOOL)IsTargetVCInStack:(id)a0 conversationID:(id)a1;

@end
