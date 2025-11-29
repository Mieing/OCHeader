@class LynxUIContext, NSMutableArray, NSArray;
@protocol LynxListCell;

@interface LynxListCachedCellManager : NSObject

@property (nonatomic) long long firstIndexInPathOrder;
@property (nonatomic) long long lastIndexInPathOrder;
@property (nonatomic) BOOL markPathOrderDirty;
@property (nonatomic) BOOL markVisibleCellDirty;
@property (weak, nonatomic) LynxUIContext *uiContext;
@property (retain, nonatomic) NSMutableArray *displayingCells;
@property (retain, nonatomic) NSMutableArray *upperCachedCells;
@property (retain, nonatomic) NSMutableArray *lowerCachedCells;
@property (readonly, nonatomic) NSArray *allCachedCells;
@property (retain, nonatomic) id<LynxListCell> lastVisibleCell;
@property (retain, nonatomic) id<LynxListCell> firstVisibleCell;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) BOOL isVerticalLayout;

- (id)removeCellAtIndex:(long long)a0;
- (double)orientationBottomOfCell:(id)a0;
- (void)updateVisibleCells;
- (id)findCellAtIndex:(long long)a0 inArray:(id)a1;
- (void)updateIndexInPathOrder;
- (id)initWithColumnCount:(long long)a0 uiContext:(id)a1;
- (void)addCell:(id)a0 inArray:(id)a1;
- (BOOL)markRemoveCellAtIndex:(long long)a0;
- (void)markCellInfoDirty;
- (id)topCells;
- (id)bottomCells;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)description;
- (id)cellAtIndex:(long long)a0;

@end
