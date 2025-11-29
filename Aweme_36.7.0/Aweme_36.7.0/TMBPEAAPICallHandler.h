@class NSString;

@interface TMBPEAAPICallHandler : NSObject <BDPolicyEntryAspectHandler>

@property (retain, nonatomic) NSString *keyValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)entryStartAction:(id)a0 context:(id)a1;
- (void)entryEndAction:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
