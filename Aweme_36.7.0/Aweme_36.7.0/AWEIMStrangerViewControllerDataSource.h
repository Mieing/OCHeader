@class NSArray, AWEIMBaseCollectionView;
@protocol AWEIMChatListHintProviderCellInterface, AWEIMStrangerViewControllerDataSourceWeakVC;

@interface AWEIMStrangerViewControllerDataSource : NSObject

@property (nonatomic) BOOL allowShowVerifiedLogoWhenAccountIsVerifiedEnterprise;
@property (copy, nonatomic) NSArray *disabledLabelStatus;
@property (nonatomic) BOOL enableDraftHintProvider;
@property (weak, nonatomic) id<AWEIMChatListHintProviderCellInterface> hintProviderService;
@property (weak, nonatomic) AWEIMBaseCollectionView *weakCollectionView;
@property (weak, nonatomic) id<AWEIMStrangerViewControllerDataSourceWeakVC> weakVC;

+ (void)syncToMainQueue:(id /* block */)a0;

- (unsigned long long)getCurrentSceneWithIndexPath:(id)a0;
- (id)getViewModelWithIndexPath:(id)a0 extModel:(id)a1;
- (id)getCurrentSessionWithScene:(id)a0;
- (void)deleteCellWithIndexPath:(id)a0 extModel:(id)a1 enterMethod:(id)a2 enableLog:(BOOL)a3 onlyRemoveCell:(BOOL)a4;
- (void)deleteCellWithIndexPath:(id)a0 extModel:(id)a1 enterMethod:(id)a2 enableLog:(BOOL)a3;
- (void)deleteWithIndexPath:(id)a0 extModel:(id)a1 enterMethod:(id)a2;
- (void)reloadAllDataSource:(id)a0 withExtDict:(id)a1 extModel:(id)a2;
- (void)deleteCellWithIndexPath:(id)a0 extModel:(id)a1 enterMethod:(id)a2;
- (void)__setupExperiment;
- (id)configViewModelWithChatModel:(id)a0 ext:(id)a1 extModel:(id)a2;
- (id)convertChatModelsToViewModels:(id)a0 withExtDict:(id)a1 extModel:(id)a2;
- (void)p_deleteWithIndexPath:(id)a0 extModel:(id)a1 enterMethod:(id)a2 vcDeleteIndexPaths:(BOOL)a3 enableLog:(BOOL)a4 onlyRemoveCell:(BOOL)a5;
- (id)getCurrentStrangerSession;
- (id)getOlderStrangerSession;
- (unsigned long long)getSessionIndexWithScene:(unsigned long long)a0;
- (void)insertViewModelWithChatModel:(id)a0 atIndex:(unsigned long long)a1 ext:(id)a2 extModel:(id)a3;
- (unsigned long long)removeChatOfSessionId:(id)a0 extModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
