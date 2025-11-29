@class IESECSliceXAction, NSString, UIView;

@interface IESECSliceXShopRecommendContainerScrollView : IESECSliceXScrollElementView <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *indicatorContainerView;
@property (nonatomic) double originOffset;
@property (nonatomic) BOOL scrollAnimate;
@property (nonatomic) double indicatorOriginX;
@property (nonatomic) long long currentIndex;
@property (nonatomic) double lastTabTimestamp;
@property (retain, nonatomic) IESECSliceXAction *scrollToShopAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)resetSubviewOffset;
- (void)preTabScrollToEnd;
- (void)tabDidChanged;
- (void)trackTabDuration;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithContext:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
