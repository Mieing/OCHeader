@class NSString, UIViewController, NSObject;
@protocol IMinimizeTaskDelegateInterface;

@interface MinimizePendingTaskContext : NSObject

@property (weak, nonatomic) NSObject<IMinimizeTaskDelegateInterface> *notifyDelegate;
@property (copy, nonatomic) NSString *taskBizName;
@property (copy, nonatomic) NSString *taskBizKey;
@property (nonatomic) unsigned long long generateType;
@property (weak, nonatomic) UIViewController *weakVC;

- (id)initWithTaskBizName:(id)a0 taskBizKey:(id)a1 notifyDelegate:(id)a2 generateType:(unsigned long long)a3 weakVC:(id)a4;
- (BOOL)checkData;
- (id)description;
- (void).cxx_destruct;

@end
