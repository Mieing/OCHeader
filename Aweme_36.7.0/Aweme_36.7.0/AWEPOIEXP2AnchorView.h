@class NSMutableArray, UIImageView, UIView, AWEPOIEntryViewReusePool, AWEPOIEntryViewLayout;

@interface AWEPOIEXP2AnchorView : AWEPOITradeEntryAnchorView {
    BOOL _isBGColorWhite;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *firstLineView;
@property (retain, nonatomic) UIView *containerDetailView;
@property (retain, nonatomic) UIImageView *iconImageDetailView;
@property (retain, nonatomic) UIView *firstDetailLineView;
@property (retain, nonatomic) AWEPOIEntryViewLayout *entryViewLayout;
@property (retain, nonatomic) AWEPOIEntryViewReusePool *reusePool;
@property (nonatomic) BOOL shouldShowDetail;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double firstFullExpandWidth;
@property (nonatomic) double firstFullTruncatedWidth;
@property (nonatomic) double firstDetailFullExpandWidth;
@property (nonatomic) double firstDetailFullTruncatedWidth;
@property (retain, nonatomic) NSMutableArray *firstItemsArray;
@property (retain, nonatomic) NSMutableArray *firstDetailItemsArray;
@property (nonatomic) long long scene;

- (void)setIsBGColorWhite:(BOOL)a0;
- (BOOL)isBGColorWhite;
- (void)showDetailInfo;
- (void)hideDetailInfo;
- (void)layoutWithOriginalStyle;
- (void)layoutWithNewStyleWithModel:(id)a0;
- (void)updateAnchorViewBackgroundColor:(id)a0;
- (void)clickMultiAnchorEventHandler:(id /* block */)a0;
- (void)configMultiAnchorCount:(long long)a0 useSeperate:(BOOL)a1;
- (void)hiddenExtendView;
- (double)customViewHeightInCommentListHeader;
- (void)setMarkImageURLs:(id)a0;
- (void)setMarkImageURLs:(id)a0 placeholder:(id)a1;
- (void)p_updateUI;
- (void)p_resetItemsArray;
- (void)p_setupA11y;
- (void)p_updateUILayout;
- (void)p_addSubviewsWithItemsArray:(id)a0 toView:(id)a1;
- (void)p_calculateContentSize;
- (void)p_updateA11y;
- (double)p_calculateViewWidthWithItemsArray:(id)a0;
- (double)p_calculateItemWidth:(id)a0;
- (BOOL)isShowingDetail;
- (void)processFirstContentModel:(id)a0 toElements:(id)a1;
- (void)processModelsInFirstLineWithItemArray:(id)a0 fullExpandWidth:(double *)a1 fullTruncatedWidth:(double *)a2;
- (void)processFirstDetailContentModel:(id)a0 toElements:(id)a1;
- (void)p_updateSubviewWithItemsArray:(id)a0 toView:(id)a1;
- (void)p_processOverWidthWithItemArray:(id)a0;
- (void)p_calculateSubviewsWidthWithItemArray:(id)a0 fullExpandWidth:(double *)a1 fullTruncatedWidth:(double *)a2;
- (void)p_calculateContentWithItemArray:(id)a0 fullExpandWidth:(double)a1 fullTruncatedWidth:(double)a2;
- (double)p_calculateItemMinWidth:(id)a0;
- (id)p_changeLengthText:(id)a0 length:(long long)a1;
- (double)maxDetailViewWidthWithArray:(id)a0;
- (void)p_calculateContentMinLengthAndTextWithItemArray:(id)a0;
- (void)configAnchorContentDataWithData:(id)a0;
- (void)p_addViews;
- (void).cxx_destruct;
- (id)initWithScene:(long long)a0;
- (void)setupUI;

@end
