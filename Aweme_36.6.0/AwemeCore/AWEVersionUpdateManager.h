@class AWEVersionUpdateWorkflow, AWEVersionUpdateNetworkModule, NSString, AWEVersionUpdateBadgeModule;

@interface AWEVersionUpdateManager : NSObject <AWEVersionUpdateWorkflowDelegate>

@property (retain, nonatomic) AWEVersionUpdateNetworkModule *networkModule;
@property (retain, nonatomic) AWEVersionUpdateBadgeModule *badgeModule;
@property (retain, nonatomic) AWEVersionUpdateWorkflow *workflow;
@property (readonly, copy, nonatomic) NSString *currentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)workflowDidFinish:(id)a0;
- (void)startVersionUpdateWorkflow:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
