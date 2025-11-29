@class NSString, MiniComposerCreationDataImpl, ACCRepositoryWorkspace, MiniComposerFinishUIManagerImpl;
@protocol MiniComposerFinishContext, MiniComposerFinishHandlerDataSource;

@interface MiniComposerFinishBaseHandler : NSObject <MiniComposerFinishUIManagerDataSource, MiniComposerCreationDataDelegate, MiniComposerFinishContext>

@property (weak, nonatomic) id<MiniComposerFinishHandlerDataSource> dataSource;
@property (retain, nonatomic) id<MiniComposerFinishContext> proxy;
@property (copy, nonatomic) id /* block */ shouldForceMergeImageBlock;
@property (retain, nonatomic) MiniComposerCreationDataImpl *creationData;
@property (retain, nonatomic) MiniComposerFinishUIManagerImpl *UIManager;
@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL DEBUGEnabled;

+ (id)staticArray;

- (id)weakSelf;
- (void)exportAllItems:(id /* block */)a0;
- (void)retainSession;
- (void)resetAssetModels:(id)a0;
- (id)creationData_composerWorkspace;
- (id)UIManager_currentController;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)releaseSession;

@end
