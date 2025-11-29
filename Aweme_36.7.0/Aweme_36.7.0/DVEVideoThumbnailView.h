@class NSArray, DVEVideoThumbnailLayout, NSMutableArray, NLETrackSlot_OC;
@protocol DVEVideoThumbnailViewDataSource, DVEVideoThumbnailViewDelegate;

@interface DVEVideoThumbnailView : UIView

@property (retain, nonatomic) NSArray *indexesForDisplayedItems;
@property (retain, nonatomic) NSMutableArray *cellCachePool;
@property (retain, nonatomic) NSMutableArray *visibleCells;
@property (weak, nonatomic) id<DVEVideoThumbnailViewDataSource> dataSource;
@property (weak, nonatomic) id<DVEVideoThumbnailViewDelegate> delegate;
@property (retain, nonatomic) DVEVideoThumbnailLayout *layout;
@property (retain, nonatomic) NLETrackSlot_OC *slot;

- (id)cellForItemAtIndex:(long long)a0;
- (void)reloadDataWithForce:(BOOL)a0;
- (id)initWithSlot:(id)a0 layout:(id)a1;
- (id)dequeueReusableCellForIndex:(long long)a0;
- (id)visibleCellList;
- (void)reloadVisibleCell;
- (id)arrayFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)reloadChangedCell;
- (void).cxx_destruct;

@end
