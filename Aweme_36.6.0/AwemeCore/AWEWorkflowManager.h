@class NSMutableDictionary;

@interface AWEWorkflowManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *domainsInfo;

+ (id)sharedManager;

- (void)stopWorkflowForDomain:(id)a0;
- (void)addWorkflow:(id)a0 domain:(id)a1;
- (void)startWorkflowForDomain:(id)a0;
- (id)workflowFromDomain:(id)a0;
- (void).cxx_destruct;

@end
