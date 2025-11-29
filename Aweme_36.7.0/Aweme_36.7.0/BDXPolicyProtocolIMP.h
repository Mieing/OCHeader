@class NSString;

@interface BDXPolicyProtocolIMP : NSObject <BDXPolicyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)policyPasteboardSetstring:(id)a0 token:(id)a1;

@end
