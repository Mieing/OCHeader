@class NSArray, NSCache, NSString;

@interface CAKAlbumMapperManager : NSObject <CAKPhotoLibraryChangeObserver>

@property (retain, nonatomic) NSArray *allAlbums;
@property (retain, nonatomic) NSCache *albumIdSets;
@property (nonatomic) BOOL albumsDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)albumNamesForAssetId:(id)a0;
- (void)forceReloadData;
- (id)identifiersInAlbum:(id)a0;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (id)init;
- (void)reloadIfNeeded;

@end
