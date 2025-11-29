@class NSString;
@protocol NLEBundleDataSource;

@interface NLEResourceFinder : NSObject <NLEResourceFinderProtocol>

@property (retain, nonatomic) id<NLEBundleDataSource> bundleDataSource;
@property (copy, nonatomic) NSString *rootPath;
@property (nonatomic) BOOL useUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resourcePathForNode:(struct shared_ptr<const cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; })a0;
- (id)resourcePathForFilePath:(id)a0;
- (id)getPathFromDataSource:(struct shared_ptr<const cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithRootPath:(id)a0 bundleDataSource:(id)a1;
- (id)initWithBundleDataSource:(id)a0;
- (id)assetForResourceNode:(struct shared_ptr<const cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;

@end
