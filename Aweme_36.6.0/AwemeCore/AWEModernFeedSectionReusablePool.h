@class NSMutableDictionary;
@protocol AWEModernFeedCellManagerProtocol;

@interface AWEModernFeedSectionReusablePool : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _typePoolCreationLock;
}

@property (retain, nonatomic) NSMutableDictionary *pool;
@property (retain, nonatomic) NSMutableDictionary *indexLastType;
@property (retain, nonatomic) NSMutableDictionary *indexLastController;
@property (retain, nonatomic) id<AWEModernFeedCellManagerProtocol> cellManager;

- (void)clearReusePool;
- (id)sectionControllerForIndex:(long long)a0;
- (id)dequeueReusableSectionControllerForType:(id)a0 atIndex:(long long)a1 forTableView:(id)a2;
- (void)moveAllSectionsWithOffsetIfNeeded:(long long)a0 withModifyPosition:(long long)a1;
- (void)didEndUsingSectionControllerAtIndex:(long long)a0 delayReusable:(BOOL)a1;
- (void)didEndUsingSectionControllerAtIndex:(long long)a0;
- (void)removeSectionIndexes:(id)a0;
- (id)dequeueReusableSectionControllerForType:(id)a0 atIndex:(long long)a1 forTableView:(id)a2 collectionView:(id)a3;
- (void)createPoolForTypeIfNeeded:(id)a0;
- (void)removeSectionIndexes:(id)a0 eraseRemovedSection:(BOOL)a1;
- (id)dequeueReusableSectionControllerForType:(id)a0 atIndex:(long long)a1 forCollectionView:(id)a2;
- (void)didEndUsingAllSectionControllers;
- (void)reorderSectionAtIndexSet:(id)a0 toIndexSet:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
