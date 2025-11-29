@class NSArray, NSObject;
@protocol OS_dispatch_source;

@interface AFDFeedBottomBarVideoAnalysisRollingView : UIView

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSArray *rollingViews;
@property (nonatomic) long long currentIndex;

- (void)setupRollingViewArrayWith:(id)a0;
- (void)playRollingAnimationIfNeed:(BOOL)a0;
- (void)removeAllAnimationForSubViews;
- (void)resetSubViewsLayout;
- (void)handleRollingAnimation;
- (void)addAnimationForView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
