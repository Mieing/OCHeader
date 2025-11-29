@class MMScrollableActionSheetContainerDownStableView, MMScrollableActionSheetContainerUpScrollView, NSString;
@protocol MMScrollableActionSheetContainerViewDelegate;

@interface MMScrollableActionSheetContainerView : MMUIView <MMScrollableActionSheetContainerUpScrollViewDelegate, MMScrollableActionSheetContainerDownStableViewDelegate>

@property (weak, nonatomic) id<MMScrollableActionSheetContainerViewDelegate> delegate;
@property (retain, nonatomic) MMScrollableActionSheetContainerUpScrollView *upScrollView;
@property (retain, nonatomic) MMScrollableActionSheetContainerDownStableView *downStableView;
@property (nonatomic) double maxContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)setupUpScrollView;
- (void)setupDownStableView;
- (void)setCustomHeaderView:(id)a0;
- (void)setCustomFooterView:(id)a0;
- (void)setHorizontalRowInfoList:(id)a0 atRow:(unsigned int)a1;
- (void)addOrUpdateHorizontalRowItemInfo:(id)a0 atRow:(unsigned int)a1;
- (void)reCreateRoundCornersLayer;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)downStableViewUpdateGradientLayerOpacity;
- (void)onTappedItemInfo:(id)a0;
- (void)onTappedCancel;
- (void).cxx_destruct;

@end
