@class UIScrollView, NSString;
@protocol AWEPOIAwemePlayerNGAutoPlayContainerProtocol, AWEPOIDetailNGAutoPlayUtilObjectProtocol;

@interface AWEPOIDetailNGAutoPlayUtil : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) id<AWEPOIAwemePlayerNGAutoPlayContainerProtocol> container;
@property (nonatomic) double latestOffsetY;
@property (nonatomic) unsigned long long direction;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double latestTriggerOffsetY;
@property (nonatomic) double scrollingSpeed;
@property (nonatomic) long long scrollTriggerCount;
@property (nonatomic) double lastDidScrollTime;
@property (nonatomic) double lastContentOffset;
@property (weak, nonatomic) id<AWEPOIDetailNGAutoPlayUtilObjectProtocol> currentPlayObject;
@property (nonatomic) BOOL shouldBeginAutoPlay;
@property (nonatomic) long long delayExecutionFlag;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playTriggerRect;
@property (nonatomic) BOOL triggerAutoPlayAfterFirstUserInteraction;
@property (nonatomic) BOOL shouldTriggerAutoPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_didEndScroll;
- (void)autoPlayObject:(id)a0;
- (void)userDidInteracted;
- (void)autoPlayVisibleObjectsWithScrollView:(id)a0 direction:(unsigned long long)a1;
- (id)calculateFrameWithCell:(id)a0;
- (void)p_autoPlayIfNeededWithScrollView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithContainer:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)autoPlay;

@end
