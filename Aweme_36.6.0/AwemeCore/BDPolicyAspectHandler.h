@interface BDPolicyAspectHandler : NSObject

+ (void)entryStart:(id)a0 context:(id)a1;
+ (void)entryEnd:(id)a0 context:(id)a1;
+ (id)willInvokeAPI:(id)a0 context:(id)a1;
+ (id)didEndInvokeAPI:(id)a0 context:(id)a1;

@end
