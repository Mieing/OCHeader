@class NSString, MinimizeTaskData;
@protocol MinimizeTransitionInterface;

@interface WCFinderMinimizationMinTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (copy, nonatomic) NSString *taskBizName;
@property (copy, nonatomic) NSString *taskBizKey;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (weak, nonatomic) id<MinimizeTransitionInterface> transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
