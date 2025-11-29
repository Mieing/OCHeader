@class NSString, NSMutableArray, NSMutableDictionary;

@interface MMImagePickerCacheObj : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *albums;
@property (retain, nonatomic) NSMutableArray *imageOnlyAlbums;
@property (retain, nonatomic) NSMutableArray *VideoOnlyAlbums;
@property (retain, nonatomic) NSMutableDictionary *assets;
@property (retain, nonatomic) NSMutableArray *assetKeys;
@property (retain, nonatomic) NSString *lastAlbumId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_albums;
+ (void)PBArrayAdd_assets;
+ (void)PBArrayAdd_lastAlbumId;
+ (void)PBArrayAdd_imageOnlyAlbums;
+ (void)PBArrayAdd_VideoOnlyAlbums;
+ (void)PBArrayAdd_assetKeys;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
