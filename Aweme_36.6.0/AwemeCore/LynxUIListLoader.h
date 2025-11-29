@class NSMutableDictionary, NSString, LynxUI, LynxUIListDiffResult, NSMutableArray;

@interface LynxUIListLoader : LynxUI <LynxUIComponentLayoutObserver>

@property (readonly, nonatomic) void *listNode;
@property (retain, nonatomic) LynxUI *currentUI;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic, getter=isDiffable) BOOL diffable;
@property (readonly, nonatomic) LynxUIListDiffResult *diffResult;
@property (readonly, nonatomic) NSMutableArray *fullSpanItems;
@property (readonly, nonatomic) NSMutableArray *stickyTopItems;
@property (readonly, nonatomic) NSMutableArray *stickyBottomItems;
@property (readonly, nonatomic) BOOL elementTypeUpdate;
@property (readonly, nonatomic) NSMutableArray *fiberFullSpanItems;
@property (readonly, nonatomic) NSMutableArray *fiberStickyTopItems;
@property (readonly, nonatomic) NSMutableArray *fiberStickyBottomItems;
@property (readonly, nonatomic) NSMutableArray *reuseIdentifiers;
@property (readonly, nonatomic) NSMutableArray *currentItemKeys;
@property (readonly, nonatomic) NSMutableDictionary *estimatedHeights;
@property (readonly, nonatomic, getter=isNewArch) BOOL newArch;
@property (nonatomic) BOOL needsInternalCellAppearNotification;
@property (nonatomic) BOOL needsInternalCellDisappearNotification;
@property (nonatomic) BOOL needsInternalCellPrepareForReuseNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propsDidUpdate;
- (void)validateIndexPath:(id)a0;
- (BOOL)isPartOnLayout;
- (void)asyncRecycleLynxUI:(id)a0;
- (void)asyncUIAtIndexPath:(id)a0 operationID:(long long)a1;
- (id)uiAtIndexPath:(id)a0;
- (void)recycleLynxUI:(id)a0;
- (void)updateLynxUI:(id)a0 toIndexPath:(id)a1;
- (id)renderLynxUIAtIndexPath:(id)a0;
- (void)onComponentLayoutUpdated:(id)a0;
- (void)onAsyncComponentLayoutUpdated:(id)a0 operationID:(long long)a1;
- (void)markIsNewArch;
- (void)updateListActionInfo:(id)a0;
- (void)loadListInfo:(id)a0 components:(id)a1;
- (void)transformExtraData;
- (void)validateLynxUI:(id)a0 indexPath:(id)a1;
- (void)loadCellInfos;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAsync;
- (void)insertChild:(id)a0 atIndex:(long long)a1;

@end
