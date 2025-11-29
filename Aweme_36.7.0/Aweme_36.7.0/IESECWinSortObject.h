@class IESECWinTabListModel, NSString, IESECWinGoodsSortModel, NSMutableArray;

@interface IESECWinSortObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) NSMutableArray *sortTypes;
@property (retain, nonatomic) IESECWinGoodsSortModel *selectedSortItem;
@property (nonatomic) long long currentSort;
@property (nonatomic) double stickyHeight;
@property (retain, nonatomic) NSMutableArray *filterTypes;
@property (nonatomic) BOOL needReverse;
@property (nonatomic) BOOL hasSticky;
@property (nonatomic) BOOL shouldSticky;
@property (weak, nonatomic) IESECWinTabListModel *tab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void)configSticky:(BOOL)a0;
- (BOOL)getShouldSticky;
- (void).cxx_destruct;
- (id)init;

@end
