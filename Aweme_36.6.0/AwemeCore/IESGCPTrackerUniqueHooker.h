@class NSMapTable;

@interface IESGCPTrackerUniqueHooker : IESGCPTrackerHooker

@property (retain, nonatomic) NSMapTable *actionMap;

+ (id)shareInstance;

- (void)uniqueHookCollectionViewCellClickEvent:(id)a0 fromCollectionView:(id)a1 clickAction:(id /* block */)a2;
- (void)uniqueHookTableViewCellClickEvent:(id)a0 fromTableView:(id)a1 clickAction:(id /* block */)a2;
- (void)registActionBlock:(id /* block */)a0 forKey:(id)a1;
- (void)uniqueHookTableViewCellClickEventFrom:(id)a0;
- (void)performActionBlockFor:(id)a0;
- (void)uniqueHookCollectionViewCellClickEventFrom:(id)a0;
- (void).cxx_destruct;

@end
