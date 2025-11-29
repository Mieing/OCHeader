@class NSString, NSMutableSet;

@interface ACCAlbumEditorExtension : ACCAlbumExtension

@property (retain, nonatomic) NSMutableSet *set;
@property (retain, nonatomic) NSString *taskID;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

+ (void)saveAssetModel:(id)a0 onCompletion:(id /* block */)a1;

- (void)saveImage:(id)a0 toFilePath:(id)a1;
- (BOOL)albumExtensionShouldBeLoaded:(id)a0;
- (void)albumDidSelectAssetes:(id)a0 targetAsset:(id)a1;
- (void)saveAssetModel:(id)a0;
- (void)importTaskWithAssetModel:(id)a0;
- (void)albumDidDeselectAsset:(id)a0;
- (void)saveNewAssetModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
