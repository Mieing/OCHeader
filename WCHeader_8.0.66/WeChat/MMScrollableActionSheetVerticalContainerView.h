@class NSString, NSMutableArray, NSMutableDictionary;
@protocol MMScrollableActionSheetVerticalContainerViewDelegate;

@interface MMScrollableActionSheetVerticalContainerView : MMUIView <MMScrollableActionSheetVerticalRowViewDelegate, MMScrollableActionSheetCustomHeaderViewInterface, MMScrollableActionSheetCustomFooterViewInterface>

@property (nonatomic) double cachedCustomHeaderViewHeight;
@property (nonatomic) double cachedCustomFooterViewHeight;
@property (weak, nonatomic) id<MMScrollableActionSheetVerticalContainerViewDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *rowInfoList;
@property (retain, nonatomic) NSMutableDictionary *rowType2RowViewMap;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)reset;
- (void)setVerticalRowInfoList:(id)a0;
- (void)addOrUpdateVerticalRowInfo:(id)a0;
- (void)setNeedRecalcuateCustomHeaderViewHeight;
- (double)calcuateCustomHeaderViewHeight;
- (double)calcuateCustomFooterViewHeight;
- (long long)getRowInfoIndexWithRowType:(unsigned int)a0;
- (id)generateRowViewForRowInfo:(id)a0;
- (void)sortRowInfoList;
- (void)layoutSubviews;
- (double)layoutVerticalRowViews;
- (void)onTappedRowInfo:(id)a0;
- (void).cxx_destruct;

@end
