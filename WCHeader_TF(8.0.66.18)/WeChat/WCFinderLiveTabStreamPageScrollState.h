@interface WCFinderLiveTabStreamPageScrollState : NSObject

@property (nonatomic) double lastContentOffset;
@property (nonatomic) double accumulatedOffset;
@property (nonatomic) BOOL isTabVisible;
@property (nonatomic) BOOL isTabVisibleByScroll;
@property (nonatomic) BOOL isDirectionChanged;
@property (nonatomic) BOOL isAnimatingToggleTabVisibility;

- (id)init;
- (void)reset;
- (void)updateWithDelta:(double)a0;
- (BOOL)shouldToggleTabWithDelta:(double)a0 accumulatedOffsetLimit:(double)a1;

@end
