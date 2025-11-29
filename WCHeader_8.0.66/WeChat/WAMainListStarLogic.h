@class NSString, NSMutableSet, NSMutableArray;
@protocol WAMainListStarLogicDelegate;

@interface WAMainListStarLogic : MMObject <WAAppItemManagerExtension>

@property (retain, nonatomic) NSMutableSet *starSet;
@property (retain, nonatomic) NSMutableArray *starItems;
@property (weak, nonatomic) id<WAMainListStarLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)fetchLocalStarData;
- (void)fetchRemoteStarDataWithScene:(unsigned int)a0;
- (void)saveEditResult;
- (BOOL)isItemStared:(id)a0;
- (BOOL)isReachStarCountLimit;
- (unsigned int)getStarNumberLimitation;
- (BOOL)hasStarData;
- (id)starItem:(id)a0 inScene:(unsigned int)a1;
- (id)starItem:(id)a0 toPosition:(unsigned long long)a1 inScene:(unsigned int)a2;
- (BOOL)unstarItem:(id)a0 inScene:(unsigned int)a1;
- (BOOL)deleteStarItem:(id)a0 inScene:(unsigned int)a1;
- (BOOL)moveStarItem:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2 inScene:(unsigned int)a3;
- (BOOL)batchMoveStarItemsWithContext:(id)a0;
- (unsigned long long)removeStarItem:(id)a0;
- (BOOL)insertStarItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertStarItemWithoutCheck:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeStarItemWithoutCheck:(id)a0;
- (id)sortStarItems:(id)a0;
- (BOOL)isItemStaredInLocal:(id)a0;
- (void)onWeAppStaredItemsInfoUpdated:(id)a0 scene:(unsigned int)a1;
- (void)onWeAppItemStared:(id)a0 errCode:(int)a1;
- (void)onWeAppItemUnStared:(id)a0 errCode:(int)a1;
- (void)onWeAppItemStared:(id)a0;
- (void)onWeAppItemUnStared:(id)a0;
- (void)onWeAppItemMoved:(id)a0 toPreItem:(id)a1 nextItem:(id)a2;
- (void)reloadStarItemsAndNotify;
- (void).cxx_destruct;

@end
