@class MMFinderLiveTaskId;
@protocol MMFinderLiveFullScreenSlideExitLogicGuideDelegate;

@interface MMFinderLiveFullScreenSlideExitLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveFullScreenSlideExitLogicGuideDelegate> guideDelegate;
@property (readonly, nonatomic) BOOL enableFullScreenSlideExit;

- (id)initWithTaskId:(id)a0;
- (void)onEnterLive;
- (void)innerShowFullScreenSlideExitGuide;
- (void)innerDismissFullScreenSlideExitGuide;
- (BOOL)enableShowFullScreenSlideExitGuide;
- (id)finderLiveTask;
- (id)eduParam;
- (void).cxx_destruct;

@end
