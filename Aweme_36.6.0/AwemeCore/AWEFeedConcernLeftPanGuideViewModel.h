@interface AWEFeedConcernLeftPanGuideViewModel : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } startPoints;
@property (nonatomic) double controlThreshold;
@property (nonatomic) long long totalTimes;
@property (nonatomic) struct { struct CGPoint { double x; double y; } controlP11; struct CGPoint { double x; double y; } controlP12; struct CGPoint { double x; double y; } controlP21; struct CGPoint { double x; double y; } controlP22; struct CGPoint { double x; double y; } startPoint; double frameX; struct CGPoint { double x; double y; } eventXY; double height; double width; double controlThreshold; } controlPoints;
@property (nonatomic) BOOL guideViewAppear;
@property (nonatomic) BOOL textIgnoreBlank;
@property (nonatomic) double textBottomPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) double rightContainerHeight;
@property (nonatomic) long long animationLoop;
@property (nonatomic) long long completedNum;
@property (nonatomic) long long completedNumRecommend;
@property (nonatomic) long long completedNumFeed;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) BOOL allFeedCanShow;
@property (copy, nonatomic) id /* block */ alertCompletionBlock;

+ (id)dateFormatter;

- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; double x5; struct CGPoint { double x0; double x1; } x6; double x7; double x8; double x9; })createControlPointsContext:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0 isGuideAnimation:(BOOL)a1;
- (BOOL)isFollowFeedLeftPanGuideReachFrequencyControl;
- (void)handleTransition:(long long)a0 context:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a1 isGuideAnimation:(BOOL)a2;
- (void)resetAnimationParams;
- (void)recordConcernGuideWithTimeAndDate;
- (BOOL)canShowConcernGuideAnimation;
- (id)getcurrentTimeString;
- (BOOL)canShowFeedGuideAnimationWithChannel:(id)a0;
- (void)recordFeedGuideWithTimeAndDateWithChannel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
