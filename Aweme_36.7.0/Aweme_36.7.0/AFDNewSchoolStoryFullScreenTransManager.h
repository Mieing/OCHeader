@class NSObject;
@protocol OS_dispatch_queue;

@interface AFDNewSchoolStoryFullScreenTransManager : NSObject

@property (nonatomic) BOOL isTransition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;

+ (long long)getHorizontalFitContentModeWithEndViewSize:(struct CGSize { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)sharedManager;

- (void)updateTransitionStatus:(BOOL)a0;
- (void)updateTransitionStatus:(BOOL)a0 delay:(double)a1;
- (void).cxx_destruct;
- (BOOL)isTransitioning;

@end
