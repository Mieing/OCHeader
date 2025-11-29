@class NSMutableArray;
@protocol TextStateCollectionViewLayoutHistoryCalendarDelegate;

@interface TextStateCollectionViewLayoutHistoryCalendar : UICollectionViewLayout

@property (nonatomic) double contentWidth;
@property (nonatomic) unsigned long long itemCountPerRow;
@property (nonatomic) double padding;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSMutableArray *sectionRangeList;
@property (retain, nonatomic) NSMutableArray *sectionItemCountList;
@property (copy, nonatomic) id /* block */ sectionBeginComparator;
@property (copy, nonatomic) id /* block */ sectionEndComparator;
@property (weak, nonatomic) id<TextStateCollectionViewLayoutHistoryCalendarDelegate> delegate;
@property (nonatomic) BOOL showStoryEntry;

+ (struct CGSize { double x0; double x1; })itemSize;
+ (double)sectionHeaderWidth;
+ (double)yearHeight;

- (id)init;
- (void)initComparator;
- (id)collectionView;
- (id)dataSource;
- (void)prepareLayout;
- (void)clearLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldShowYearForSection:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })formerRowsRectForSection:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endRowRectForSection:(unsigned long long)a0;
- (unsigned long long)sectionIndexForY:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sectionFrameAtIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })originForFirstItemAtSection:(long long)a0;
- (struct CGPoint { double x0; double x1; })offsetForItemAtIndex:(long long)a0;
- (double)storyEntryBeginY;
- (void).cxx_destruct;

@end
