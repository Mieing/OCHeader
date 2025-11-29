@class AWEKefuGuideSessionConfig, AWEKefuGuideContainerView, NSMutableArray, AWEKefuGuideTask;

@interface AWEKefuGuideTaskManager : NSObject

@property (nonatomic) long long actionId;
@property (retain, nonatomic) AWEKefuGuideSessionConfig *config;
@property (retain, nonatomic) AWEKefuGuideTask *currentTask;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) AWEKefuGuideContainerView *container;

- (id)getCurrentCommand;
- (void)startGuide;
- (void)updateActionId:(long long)a0;
- (void)closeGuide;
- (void)tryShowGuideWithCommandModel:(id)a0 showCallBack:(id /* block */)a1 dismissCallBack:(id /* block */)a2;
- (void)p_dismissTask:(id)a0 reason:(id)a1;
- (void)p_tryShowCurrentTask;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
