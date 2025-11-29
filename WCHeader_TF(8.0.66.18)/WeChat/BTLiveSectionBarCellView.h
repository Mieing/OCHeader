@class BTLiveSectionBarHeaderView, BTLiveSectionData, BTBrandBarScrollView, NSString, UIView, NSMutableArray, UITapGestureRecognizer;
@protocol BTLiveSectionBarCellViewDelegate;

@interface BTLiveSectionBarCellView : MMTableViewCell <UIScrollViewDelegate>

@property (retain, nonatomic) BTLiveSectionBarHeaderView *headerView;
@property (retain, nonatomic) NSMutableArray *itemViewArr;
@property (nonatomic) unsigned long long pageIndexBeforeScroll;
@property (retain, nonatomic) UITapGestureRecognizer *headerTapGesture;
@property (nonatomic) unsigned long long itemNumPerPage;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemHeight;
@property (nonatomic) double pageWidth;
@property (retain, nonatomic) UIView *splitLineView;
@property (nonatomic) unsigned long long splitLineIndex;
@property (retain, nonatomic) NSMutableArray *voiceOverElements;
@property (retain, nonatomic) BTLiveSectionData *sectionData;
@property (weak, nonatomic) id<BTLiveSectionBarCellViewDelegate> barViewDelegate;
@property (retain, nonatomic) BTBrandBarScrollView *scrollView;
@property (nonatomic) BOOL isTitleUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;
+ (double)cellHeightForFold;
+ (double)barViewHeight;
+ (double)headerViewHeight;
+ (double)headerViewHeightForFold;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)resetPosition;
- (void)initSubviews;
- (void)setupSplitLine;
- (void)initSpliteLineView;
- (void)setupViewWhenScrollViewHidden;
- (void)setupViewWhenScrollViewShow;
- (void)layoutSubviews;
- (void)layoutItemViews;
- (void)layoutSpliteLineAndGetCurrentWidth:(double *)a0;
- (double)itemViewWidth;
- (void)setItemViewAlpha:(id)a0;
- (void)setItemViewOffset:(id)a0 index:(long long)a1 splitLineWidth:(double)a2;
- (id)visibleItemViewArr;
- (void)resetContentOffset;
- (long long)getCurrentPageIndex;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)callLiveBarItemViewExposed;
- (void)expendStateWithAnimated;
- (void)foldStateWithAnimated;
- (void)onClickContact:(id)a0;
- (void)onClickExpand;
- (void)updateHeaderViewPosWithContentOffsetX:(double)a0;
- (void)initVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
