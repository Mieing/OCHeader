@class UIColor, NSMutableArray;

@interface WCStoryPageControl : UIPageControl

@property (retain, nonatomic) UIColor *normalPageColor;
@property (retain, nonatomic) UIColor *currentPageColor;
@property (retain, nonatomic) UIColor *highlightedPageColor;
@property (nonatomic) unsigned long long hightlightIndexMask;
@property (retain, nonatomic) NSMutableArray *pageDotsForIOS14Plus;

+ (id)pageControlWithPageCount:(unsigned long long)a0 normalPageColor:(id)a1 currentPageColor:(id)a2 highlightedPageColor:(id)a3;

- (id)initWithPageCount:(unsigned long long)a0 normalPageColor:(id)a1 currentPageColor:(id)a2 highlightedPageColor:(id)a3;
- (void)setNumberOfPages:(long long)a0;
- (BOOL)highlightedPageAtIndexs:(id)a0;
- (BOOL)highlightedPageAtIndex:(unsigned long long)a0;
- (BOOL)highlightedAllPage;
- (BOOL)unHighlightedPageAtIndex:(unsigned long long)a0;
- (BOOL)unHighlightedAllPage;
- (unsigned long long)firstHighlightedIndex;
- (BOOL)isHighlightedAtIndex:(unsigned long long)a0;
- (BOOL)hasHighlightedIndex;
- (void)deletePageAtIndex:(unsigned long long)a0;
- (void)setCurrentPage:(long long)a0;
- (void)updateDots;
- (void)layoutSubviews;
- (void)updatePageDots:(long long)a0 dotViews:(id)a1;
- (void)updateDotFrame:(id)a0 index:(int)a1;
- (void)setupPageDotsForIOS14Plus;
- (void)layoutPageDotsForIOS14Plus;
- (void)resetDotIndicator;
- (void).cxx_destruct;

@end
