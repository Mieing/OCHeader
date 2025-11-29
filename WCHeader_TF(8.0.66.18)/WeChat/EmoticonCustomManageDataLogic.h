@class OrderedDictionary, NSMutableArray;

@interface EmoticonCustomManageDataLogic : MMObject

@property (retain, nonatomic) OrderedDictionary *wrapList;
@property (retain, nonatomic) NSMutableArray *md5ListIncludeMoving;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) OrderedDictionary *markedWrapList;
@property (retain, nonatomic) NSMutableArray *originIndexesOfMovingWrap;
@property (retain, nonatomic) NSMutableArray *insertedIndexesOfMovingWrap;
@property (retain, nonatomic) NSMutableArray *needAnimateMd5List;
@property (nonatomic) long long placeHolderIndex;
@property (nonatomic) unsigned long long startMultiSelectIndex;
@property (nonatomic) unsigned long long lastMultiSelectIndex;
@property (nonatomic) unsigned long long startMultiSelectMarkedCount;
@property (nonatomic) BOOL startMultiSelectStatus;
@property (nonatomic) unsigned long long status;

- (id)initWithType:(unsigned long long)a0;
- (id)init;
- (id)recoverMgr;
- (unsigned long long)totalEmoticonCountIncludeRecoverFailed;
- (unsigned long long)totalEmoticonCountShowed;
- (unsigned long long)totalShowingItems;
- (unsigned long long)totalShowingItemsWithoutInsertPlaceHolder:(BOOL)a0;
- (id)emoticonManageWrapAtIndex:(unsigned long long)a0;
- (id)indexesOfMovingWrap;
- (id)indexesOfInsertedWrapForMoveFinish;
- (id)indexesOfRemovedWrapForMoveFinish;
- (id)md5ListForMarkItems;
- (void)commitInsertPlaceWithIndex:(unsigned long long)a0;
- (id)emoticonManageWrapForMd5:(id)a0;
- (void)changeMarkStateWithWrap:(id)a0;
- (void)clearAllMark;
- (void)clearMoveStatus;
- (void)checkNeedAnimateList;
- (void)clearAllSelectAndPrepareAnimation;
- (void)clearAllAnimatedWraps;
- (void)cleanInsertWithSucBlock:(id /* block */)a0;
- (void)cleanInsert;
- (BOOL)shouldInsertPlaceHolderAt:(long long)a0;
- (void)insertPlaceHolderAt:(long long)a0 WithRemovePreviousInsertBlock:(id /* block */)a1 onlyInsertBlock:(id /* block */)a2;
- (void)getInsertIndexWithSucBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)startMultiSelectWithIndex:(unsigned long long)a0;
- (void)moveMultiSelectWithIndex:(unsigned long long)a0;
- (void)endMultiSelect;
- (BOOL)needForbiddenFirstWrap;
- (id)getLocalEmoticonList:(unsigned long long)a0;
- (id)getMergedEmoticonList:(unsigned long long)a0;
- (id)reloadDataWithType:(unsigned long long)a0;
- (void)updateCustomAddWrapIn:(id)a0 forMode:(unsigned long long)a1;
- (void)updateSelectStatus:(id)a0;
- (id)restoreDataForSelect:(id)a0;
- (id)restoreDataForSelectAfterInsert:(id)a0;
- (id)getDataForMove:(id)a0;
- (void)updateWrapForAnimationWithStatus:(unsigned long long)a0;
- (void).cxx_destruct;

@end
