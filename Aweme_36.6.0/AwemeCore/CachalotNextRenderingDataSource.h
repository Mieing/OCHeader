@class NSArray, CachalotLayoutModel, NSString;
@protocol CachalotNextRenderingDataSourceProvider;

@interface CachalotNextRenderingDataSource : NSObject <CachalotNextRenderingCycleListener>

@property (copy, nonatomic) NSArray *renderingDataSource;
@property (copy, nonatomic) NSArray *previousRenderingDataSource;
@property (weak, nonatomic) id<CachalotNextRenderingDataSourceProvider> provider;
@property (retain, nonatomic) CachalotLayoutModel *renderingSnapshotRoot;
@property (retain, nonatomic) CachalotLayoutModel *previousRenderingSnapshotRoot;
@property (nonatomic) BOOL banDataSourceTreeCopyWhenRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_fetchRenderingInfo;
- (void)renderCycleWillBegin:(id)a0;
- (void)renderCycleDidBegin:(id)a0;
- (void)renderCycleWillEnd:(id)a0;
- (void)renderCycleDidEnd:(id)a0;
- (id)layoutModelAtIndex:(long long)a0;
- (long long)indexOfLayoutModel:(id)a0;
- (id)autoGenerateRenderDiff;
- (id)retrieveAllDirtyLayouts:(unsigned long long)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (id)initWithProvider:(id)a0;

@end
