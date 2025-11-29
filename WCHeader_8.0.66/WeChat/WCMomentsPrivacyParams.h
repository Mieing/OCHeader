@class NSArray, NSIndexSet, NSDictionary, UIView, NSIndexPath;

@interface WCMomentsPrivacyParams : NSObject

@property (retain, nonatomic) NSArray *table;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSIndexPath *originSelectedIndexPath;
@property (nonatomic) BOOL expandSelection;
@property (nonatomic) long long itemCount;
@property (retain, nonatomic) NSIndexSet *lastItemIndexSet;
@property (retain, nonatomic) NSDictionary *indexToIndexPath;
@property (retain, nonatomic) NSDictionary *indexPathToIndex;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } footerViewInsets;
@property (copy, nonatomic) id /* block */ onReload;

- (id)initWithTable:(id)a0 originSelectedIndexPath:(id)a1;
- (void)initViewState;
- (void)initLookUpTable;
- (void)selectItemAtIndexPath:(id)a0;
- (id)selectedItem;
- (id)itemAtIndexPath:(id)a0;
- (id)indexPathFromIndex:(long long)a0;
- (long long)indexFromIndexPath:(id)a0;
- (BOOL)isIndexLastItemInSection:(long long)a0;
- (BOOL)scopeHasChanged;
- (void).cxx_destruct;

@end
