@class WCDataItem, WCAdvertiseAnimationDisplayLink, NSString, WCAdBrandTopicPreludeView, ColorGradientView, WCAdBrandTopicInfo, WCAdBrandTopicListView;

@interface WCAdBrandTopicBannerView : WCAdBaseBarView <WCAdvertiseAnimationDisplayLinkDelegate, WCAdBrandTopicListViewDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long itemScene;
@property (retain, nonatomic) WCAdBrandTopicInfo *adBrandTopicInfo;
@property (retain, nonatomic) WCAdBrandTopicPreludeView *preludeView;
@property (retain, nonatomic) WCAdBrandTopicListView *listView;
@property (retain, nonatomic) ColorGradientView *leftGradientView;
@property (retain, nonatomic) ColorGradientView *rightGradientView;
@property (retain, nonatomic) WCAdvertiseAnimationDisplayLink *animationDisplayLink;
@property (nonatomic) unsigned long long animationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight:(id)a0 maxWidth:(double)a1;
+ (double)topMargin:(id)a0 maxWidth:(double)a1;
+ (double)bottomMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2;
- (void)dealloc;
- (void)generateSubviews;
- (void)prepare;
- (void)start;
- (void)stop;
- (id)preludeViewPositionAnimation;
- (id)preludeViewOpacityAnimation;
- (id)listViewPositionAnimation;
- (id)listViewOpacityAnimation;
- (id)leftGradientViewOpacityAnimation;
- (id)rightGradientViewOpacityAnimation;
- (void)scheduleAnimation;
- (void)startAnimation;
- (void)stopAnimation;
- (void)onAnimationDisplayLinkAnimationDone:(id)a0;
- (id)generateGradientView;
- (void)updateLeftGradientViewVisibleWithOffsetX:(double)a0;
- (void)updateRightGradientViewVisibleWithOffsetX:(double)a0 contentWidth:(double)a1 viewWidth:(double)a2;
- (void)onTopicListViewClickedForIndex:(unsigned long long)a0 originView:(id)a1;
- (void)onTopicListViewDidScrollWithOffsetX:(double)a0 contentWidth:(double)a1 viewWidth:(double)a2;
- (void).cxx_destruct;

@end
