@class NSString, LynxUIScrollViewInternal;

@interface LynxUIScrollViewEventHelper : NSObject <LynxBaseScrollViewDelegate>

@property (nonatomic) double upperThreshold;
@property (nonatomic) double lowerThreshold;
@property (nonatomic) double throttle;
@property (weak, nonatomic) LynxUIScrollViewInternal *ui;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) BOOL atUpper;
@property (nonatomic) BOOL atLower;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSticky:(struct CGPoint { double x0; double x1; })a0;
- (void)updateScrollPosition;
- (id)getHitTestChainForNestedScrollViews;
- (void)scrollStateChangedFrom:(long long)a0 to:(long long)a1;
- (void)sendScrollEvent:(id)a0 params:(id)a1;
- (void)tryToSendScrollEvent;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
