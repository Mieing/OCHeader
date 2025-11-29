@class NSString, NSArray, AWEGrouponTaskCommonContext;

@interface AWEGrouponTaskDecisionContext : NSObject

@property (copy, nonatomic) NSString *triggerType;
@property (copy, nonatomic) NSString *triggerSource;
@property (nonatomic) BOOL isDestroy;
@property (retain, nonatomic) NSArray *tasks;
@property (retain, nonatomic) AWEGrouponTaskCommonContext *commonContext;

- (id)initWithTasks:(id)a0 triggerType:(id)a1 triggerSource:(id)a2;
- (void).cxx_destruct;

@end
