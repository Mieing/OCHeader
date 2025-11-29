@class MinimizeTaskData;

@interface WCFinderMinimizeAnimationTask : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (weak, nonatomic) MinimizeTaskData *taskData;

- (void).cxx_destruct;

@end
