@class NSString, NSMutableArray;
@protocol MMScrollableActionSheetHorizontalScrollViewDelegate;

@interface MMScrollableActionSheetHorizontalScrollView : UIScrollView <MMScrollableActionSheetHorizontalItemViewDelegate>

@property (weak, nonatomic) id<MMScrollableActionSheetHorizontalScrollViewDelegate> actionSheetDelegate;
@property (retain, nonatomic) NSMutableArray *itemInfoList;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)reset;
- (void)setHorizontalRowInfoList:(id)a0;
- (void)addOrUpdateHorizontalRowItemInfo:(id)a0;
- (double)calcuateMaxItemHeight;
- (double)calcuateScrollViewHeight;
- (long long)getItemInfoIndexWithItemType:(unsigned int)a0;
- (id)generateItemViewForItemInfo:(id)a0;
- (void)sortItemInfoList;
- (void)updateItemViewMap;
- (void)layoutSubviews;
- (void)onTappedItemInfo:(id)a0;
- (void).cxx_destruct;

@end
