@class LynxEventEmitter, NSString, NSDate, LynxUI, LynxListScrollEventEmitterHelper;
@protocol LynxListScrollEventEmitterDelegate;

@interface LynxListScrollEventEmitter : NSObject <UIScrollViewDelegate>

@property (readonly, weak, nonatomic) LynxUI *lynxUI;
@property (readonly, weak, nonatomic) LynxEventEmitter *emitter;
@property (retain, nonatomic) NSDate *lastScrollEventTimestamp;
@property (nonatomic) double preScrollTop;
@property (nonatomic) double preScrollLeft;
@property (nonatomic) BOOL didSendScrollStateDragging;
@property (nonatomic) long long lastBorderStatus;
@property (nonatomic) BOOL nestedUpdated;
@property (weak, nonatomic) id<LynxListScrollEventEmitterDelegate> delegate;
@property (nonatomic) BOOL enableScrollEvent;
@property (nonatomic) BOOL enableScrollToLowerEvent;
@property (nonatomic) BOOL enableScrollToUpperEvent;
@property (nonatomic) double scrollEventThrottle;
@property (nonatomic) double scrollUpperThreshold;
@property (nonatomic) double scrollLowerThreshold;
@property (nonatomic) BOOL horizontalLayout;
@property (retain, nonatomic) LynxListScrollEventEmitterHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLynxUI:(id)a0;
- (void)sendScrollEvent:(id)a0 scrollTop:(float)a1 scollleft:(float)a2 scrollHeight:(float)a3 scrollWidth:(float)a4 deltaX:(float)a5 deltaY:(float)a6;
- (id)attachedCellsArray;
- (BOOL)reachLowerThresholdByUserDefinedCondition;
- (BOOL)isLower:(long long)a0;
- (BOOL)isReadyToLower:(long long)a0;
- (BOOL)reachUpperThresholdByUserDefinedCondition;
- (BOOL)isUpper:(long long)a0;
- (BOOL)isReadyToUpper:(long long)a0;
- (void)sendScrollEvent:(id)a0 scrollTop:(float)a1 scollleft:(float)a2 scrollHeight:(float)a3 scrollWidth:(float)a4 deltaX:(float)a5 deltaY:(float)a6 state:(unsigned long long)a7;
- (void)sendScrollEvent:(id)a0 force:(BOOL)a1;
- (void)sendScrollStateEvent:(int)a0;
- (void)scrollStop:(id)a0;
- (void)attachToLynxUI:(id)a0;
- (void)helperSendScrollEvent:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
