@class NSString, NSMapTable;

@interface MMNavigationItemMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMapTable *navBarItemMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)setItems:(id)a0 forNavigationBar:(id)a1;
- (id)filterItems:(id)a0 forNavigationBar:(id)a1;
- (id)tryCopyItem:(id)a0;
- (id)tryCopyButtonItem:(id)a0;
- (void).cxx_destruct;

@end
