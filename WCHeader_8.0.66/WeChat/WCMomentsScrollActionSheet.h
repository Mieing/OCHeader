@class NSString, NSMutableArray, WCMomentScrollActionSheetHeaderView;

@interface WCMomentsScrollActionSheet : MMScrollActionSheet

@property (retain, nonatomic) NSMutableArray *pendingItemsInRow0;
@property (retain, nonatomic) NSMutableArray *pendingItemsInRow1;
@property (retain, nonatomic) WCMomentScrollActionSheetHeaderView *loadingHeaderView;
@property (nonatomic) BOOL isShowLoadingHeader;
@property (retain, nonatomic) NSString *loadingHeaderTitle;

+ (struct CGSize { double x0; double x1; })defaultItemSize;
+ (void)updateOldItem:(id)a0 newItem:(id)a1;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_init;
- (void)_initHeaderView;
- (void)addPendingItemInRow0:(id)a0;
- (void)addPendingItemInRow1:(id)a0;
- (void)addPendingItemInRow0WithTitle:(id)a0 image:(id)a1 isEnabled:(BOOL)a2;
- (void)addPendingItemInRow1WithTitle:(id)a0 image:(id)a1 isEnabled:(BOOL)a2;
- (void)addPendingItemInRow0WithTitle:(id)a0 svgImageName:(id)a1 svgImageColor:(id)a2 isEnabled:(BOOL)a3;
- (void)addPendingItemInRow1WithTitle:(id)a0 svgImageName:(id)a1 svgImageColor:(id)a2 isEnabled:(BOOL)a3;
- (void)commitPendingItems;
- (BOOL)containsItemWithTitle:(id)a0;
- (BOOL)containsItemInRow0WithTitle:(id)a0;
- (BOOL)containsItemInRow1WithTitle:(id)a0;
- (BOOL)isItemValidWithTitle:(id)a0;
- (id)ItemInRow0WithTitle:(id)a0;
- (id)ItemInRow1WithTitle:(id)a0;
- (id)createItemWithTitle:(id)a0 image:(id)a1;
- (void).cxx_destruct;

@end
