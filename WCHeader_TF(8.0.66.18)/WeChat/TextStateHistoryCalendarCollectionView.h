@class TextStateHistoryCalendar, NSString, TextStateCollectionViewLayoutHistoryCalendar, UITapGestureRecognizer;
@protocol TextStateHistoryCalendarCollectionViewDelegate;

@interface TextStateHistoryCalendarCollectionView : UICollectionView <TextStateCollectionViewLayoutHistoryCalendarDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<TextStateHistoryCalendarCollectionViewDelegate> delegate;
@property (retain, nonatomic) TextStateHistoryCalendar *calendar;
@property (readonly, nonatomic) TextStateCollectionViewLayoutHistoryCalendar *calendarLayout;
@property (nonatomic) BOOL showStoryEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)configure;
- (BOOL)showStoryEntry;
- (void)setShowStoryEntry:(BOOL)a0;
- (id)itemReuseIdentifierWithInfoCount:(unsigned long long)a0;
- (void)onTap:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (BOOL)shouldShowYearForSection:(unsigned long long)a0;
- (void).cxx_destruct;

@end
