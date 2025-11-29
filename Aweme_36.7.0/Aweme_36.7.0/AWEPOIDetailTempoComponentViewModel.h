@class AWEPOISkeletonView, NSString, NSDictionary, AWEPOIDetailTempoComponentView, NSNumber;

@interface AWEPOIDetailTempoComponentViewModel : DitoComponentViewModel

@property (copy, nonatomic) NSString *templateUrl;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (retain, nonatomic) AWEPOISkeletonView *skeletonView;
@property (copy, nonatomic) NSDictionary *skeletonData;
@property (nonatomic) BOOL receivePageScroll;
@property (nonatomic) double lastScrollEventTimeStamp;
@property (nonatomic) BOOL needNestedScroll;
@property (retain, nonatomic) NSNumber *lastScrollViewOffsetY;
@property (weak, nonatomic) AWEPOIDetailTempoComponentView *cell;
@property (readonly, copy, nonatomic) NSString *cardPerfKey;
@property (nonatomic) double scrollEventThrottle;

- (id)componentReuseIdentifier;
- (void)updateNode:(id)a0;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)pageView:(id)a0 scrollViewDidEndDecelerating:(id)a1;
- (id)getUniqueId;
- (id)getVoData;
- (id)tempoExtension;
- (id)getScriptVmData;
- (id)fetchSkeletonView;
- (void)setupSkeletonViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)parseQueryItems:(id)a0;
- (void)parseNeedNestedScrollValue;
- (void)refreshNode:(id)a0;
- (void)handleModalViewStateChange;
- (void)sendScrollEventWithDeltaY:(id)a0;
- (void)forceNotifyTempoScrollViewVisibilityChanged:(id)a0;
- (void)sendScrollEvent:(id)a0;
- (void)pageView:(id)a0 scrollViewDidEndScrollingAnimation:(id)a1;
- (void)didFinishLoadWithURL:(id)a0;
- (void)didLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
