@class LynxEventEmitter, NSString;

@interface LynxUIListScrollManager : NSObject <UIScrollViewDelegate>

@property (nonatomic) long long sign;
@property (weak, nonatomic) LynxEventEmitter *emitter;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) struct CGSize { double width; double height; } lastContentSize;
@property (nonatomic) double lastUpdateTime;
@property (retain, nonatomic) NSString *lastEvent;
@property (nonatomic) double scrollToStartOffset;
@property (nonatomic) double scrollToEndOffset;
@property (nonatomic) long long scrollToStartItemCount;
@property (nonatomic) long long scrollToEndItemCount;
@property (nonatomic) double throttle;
@property (nonatomic) unsigned long long position;
@property (nonatomic) unsigned long long scrollStatus;
@property (nonatomic) long long scrollingDirection;
@property (nonatomic) BOOL horizontal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendScrollEvent:(id)a0;
- (id)fetchScrollEvent:(id)a0;
- (void)updateScrollThresholds:(id)a0;
- (void)sendCustomEvent:(id)a0 detail:(id)a1;
- (id)visibleIndexes:(id)a0;
- (unsigned long long)position:(id)a0 visibleIndexes:(id)a1 total:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setEventEmitter:(id)a0;

@end
