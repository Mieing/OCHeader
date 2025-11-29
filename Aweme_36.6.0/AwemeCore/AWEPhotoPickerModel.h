@class NSArray, NSString, AWEDetectAlbumFaceTask, NSMutableArray;

@interface AWEPhotoPickerModel : NSObject <PHPhotoLibraryChangeObserver>

@property (nonatomic) BOOL fetchResultDidChange;
@property (retain, nonatomic) NSMutableArray *assetModels;
@property (retain, nonatomic) AWEDetectAlbumFaceTask *task;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long detectedTotalCount;
@property (readonly, copy, nonatomic) NSArray *selectedAssetModelArray;
@property (readonly, copy, nonatomic) NSArray *selectedAssetIndexArray;
@property (copy, nonatomic) id /* block */ didUpdatedBlock;
@property (copy, nonatomic) id /* block */ didResetSelectedAssetBlock;
@property (copy, nonatomic) id /* block */ assetFilterBlock;
@property (copy, nonatomic) id /* block */ finishDetectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfSelectedAssetIndexArray;
+ (BOOL)automaticallyNotifiesObserversOfSelectedAssetModelArray;

- (void)resetSelectedAssetState;
- (long long)toolsUploadStickerBarMaterialCount;
- (BOOL)isVaildWithAssetModel:(id)a0;
- (void)selectAssetWithLocalIdentifierArray:(id)a0;
- (void)updateSelectedAssetModelArray:(id)a0 selectedAssetIndexArray:(id)a1;
- (id)lastSelectedAsset;
- (void)selectAssetModelAtIndex:(long long)a0;
- (void)deselectAssetModelAtIndex:(long long)a0;
- (void)selectAssetModelArray:(id)a0;
- (void)load;
- (void).cxx_destruct;
- (void)reload;
- (void)photoLibraryDidChange:(id)a0;
- (void)dealloc;
- (id)initWithResourceType:(unsigned long long)a0;
- (void)handleFetchResult:(id)a0;
- (void)p_applicationDidBecomeActive:(id)a0;

@end
