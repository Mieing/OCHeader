@class AWELoginAfterWorkFlowObject;

@interface AWELoginAfterWorkFlowManager : NSObject

@property (retain, nonatomic) AWELoginAfterWorkFlowObject *currentWorkFlow;

+ (void)executeWorkFlowWithConfig:(id)a0 completion:(id /* block */)a1;
+ (id)sharedInstance;

- (void)executeWorkFlowWithConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
