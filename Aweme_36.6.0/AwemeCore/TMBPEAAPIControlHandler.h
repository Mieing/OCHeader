@class NSString;

@interface TMBPEAAPIControlHandler : NSObject <BDPolicyEntryAspectHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bdPolicyWillInvokeAPI:(id)a0 context:(id)a1;
- (id)bdPolicyDidEndInvokeAPI:(id)a0 context:(id)a1;
- (void)sendErrorEventWithContext:(id)a0 andResult:(id)a1;

@end
