@class NSMutableDictionary, NSString, UIView, NSMutableArray;
@protocol MMScrollableActionSheetCustomFooterViewInterface, MMScrollableActionSheetCustomHeaderViewInterface, MMScrollableActionSheetContainerUpScrollViewDelegate;

@interface MMScrollableActionSheetContainerUpScrollView : UIScrollView <MMScrollableActionSheetHorizontalScrollViewDelegate>

@property (nonatomic) double cachedUpScrollViewContentHeight;
@property (weak, nonatomic) id<MMScrollableActionSheetContainerUpScrollViewDelegate> actionSheetDelegate;
@property (retain, nonatomic) UIView<MMScrollableActionSheetCustomHeaderViewInterface> *customHeaderView;
@property (retain, nonatomic) UIView<MMScrollableActionSheetCustomFooterViewInterface> *customFooterView;
@property (retain, nonatomic) NSMutableArray *horizontalScrollViewList;
@property (retain, nonatomic) NSMutableDictionary *seperatorViewMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)setHorizontalRowInfoList:(id)a0 atRow:(unsigned int)a1;
- (void)addOrUpdateHorizontalRowItemInfo:(id)a0 atRow:(unsigned int)a1;
- (void)setNeedRecalcuateUpScrollViewContentHeight;
- (double)calcuteUpScrollViewContentHeight;
- (id)getOrCreateHorizontalScrollViewAndSeperatorViewAtRow:(unsigned int)a0;
- (void)allSeperatorViewsRemoveFromSuperview;
- (void)setSeperatorViewY:(double)a0 atRow:(long long)a1;
- (void)layoutSubviews;
- (double)layoutCustomHeaderViewAndHorizontalScrollViewsAndFooterView;
- (void)onTappedItemInfo:(id)a0;
- (void).cxx_destruct;

@end
