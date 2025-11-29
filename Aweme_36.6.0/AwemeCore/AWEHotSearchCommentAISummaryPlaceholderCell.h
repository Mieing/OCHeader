@class NSString, AWECommonFeedSectionContext;
@protocol AWECommonFeedCellModelProtocol;

@interface AWEHotSearchCommentAISummaryPlaceholderCell : UICollectionViewCell <AWECommonFeedCellProtocol>

@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCellLayout;
- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (long long)countOfAISummary;
- (id)p_createLineViewWithColor:(id)a0;
- (void)p_configCircleViewsWithContainer:(id)a0 line:(id)a1;
- (void)p_configSingleCircleWithContainer:(id)a0 line:(id)a1 needQuote:(BOOL)a2;
- (void)p_configBottomViewWithContainer:(id)a0 line:(id)a1;
- (void)p_configQuoteImageViewWithContainer:(id)a0 line:(id)a1;
- (id)p_createCircleViewWithSize:(double)a0 Color:(id)a1;
- (void)p_configUI;
- (void).cxx_destruct;
- (BOOL)hasVideo;

@end
