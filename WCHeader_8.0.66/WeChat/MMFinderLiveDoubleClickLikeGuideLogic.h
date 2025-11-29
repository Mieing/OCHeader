@class MMFinderLiveTaskId;
@protocol MMFinderLiveDoubleClickLikeGuideLogicDelegate;

@interface MMFinderLiveDoubleClickLikeGuideLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL doubleClickLikeTriggered;
@property (nonatomic) BOOL keyboardVisible;
@property (weak, nonatomic) id<MMFinderLiveDoubleClickLikeGuideLogicDelegate> guideDelegate;

+ (unsigned int)defaultSecondsShowGuideAfterJoinLive;

- (id)initWithTaskId:(id)a0;
- (void)onEnterLive;
- (void)innerShowDoubleClickLikeGuide;
- (void)innerDismissShowDoubleClickLikeGuide;
- (BOOL)enableShowDoubleClickLikeGuide;
- (id)finderLiveTask;
- (id)eduParam;
- (BOOL)enableDoubleClickLike;
- (BOOL)enableShowGuide;
- (void)onDoubleClickedLikeTriggered;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;

@end
