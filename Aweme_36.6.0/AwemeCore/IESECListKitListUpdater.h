@class NSMutableArray, IESECListKitBFFViewController, IESECDIMessageCenter;

@interface IESECListKitListUpdater : NSObject

@property (weak, nonatomic) IESECListKitBFFViewController *ieseclistkit_listVC;
@property (retain, nonatomic) IESECDIMessageCenter *messageCenter;
@property (retain, nonatomic) NSMutableArray *tableArr;
@property (retain, nonatomic) id bizContext;

- (id)messageObjectWithProtocol:(id)a0;
- (void)registerMessageObject:(id)a0 toProtocol:(id)a1;
- (id)visibleCollectionViewCellsInSection:(id)a0;
- (id)collectionViewCellInSection:(id)a0 item:(id)a1;
- (id)createProxyAndBindService:(Class)a0 toProtocol:(id)a1;
- (id)headerViewInSection:(id)a0;
- (void)updateLayout:(BOOL)a0 inSection:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)removeItemInSection:(unsigned long long)a0 index:(unsigned long long)a1 animated:(BOOL)a2;
- (id)firstPlayableMediaCell;
- (BOOL)updateSectionData:(id)a0 animated:(BOOL)a1;
- (BOOL)updateSectionData:(id)a0 animated:(BOOL)a1 onlyUpdate:(BOOL)a2;
- (void)removeItems:(id)a0 inSection:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)_findOrAddServiceWithClass:(Class)a0 toProtocol:(id)a1;
- (id)_addServiceWithClass:(Class)a0 toProtocol:(id)a1;
- (BOOL)updateSectionWithListModel:(id)a0 sectionID:(id)a1 animated:(BOOL)a2 onlyUpdate:(BOOL)a3 completion:(id /* block */)a4;
- (void)updateModel:(id)a0 inSection:(unsigned long long)a1 index:(unsigned long long)a2 updateAnimated:(BOOL)a3 completion:(id /* block */)a4;
- (void)removeItems:(id)a0 inSection:(id)a1 animated:(BOOL)a2;
- (BOOL)insertItem:(id)a0 inSection:(id)a1 animated:(BOOL)a2;
- (BOOL)insertItem:(id)a0 inSection:(id)a1 index:(unsigned long long)a2 animated:(BOOL)a3;
- (void)scrollToItemAtSection:(unsigned long long)a0 index:(long long)a1 scrollPosition:(unsigned long long)a2 animated:(BOOL)a3;
- (void)unRegisterMessageObject:(id)a0 toProtocol:(id)a1;
- (void)reloadList:(BOOL)a0;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (void)reloadSection:(unsigned long long)a0 completion:(id /* block */)a1;

@end
