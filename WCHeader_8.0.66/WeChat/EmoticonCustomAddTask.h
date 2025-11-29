@class UINavigationController, NSString, EmoticonCustomAddLogicController;
@protocol EmoticonCustomAddTaskDelegate;

@interface EmoticonCustomAddTask : NSObject <EmoticonCustomAddLogicControllerDelegate, MMUIViewControllerDelegate>

@property (retain, nonatomic) EmoticonCustomAddLogicController *addLogicController;
@property (weak, nonatomic) id<EmoticonCustomAddTaskDelegate> delegate;
@property (weak, nonatomic) UINavigationController *topNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
