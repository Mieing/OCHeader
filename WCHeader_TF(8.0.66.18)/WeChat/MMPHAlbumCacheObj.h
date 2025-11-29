@class UIImage, NSString, NSMutableDictionary;

@interface MMPHAlbumCacheObj : MMALbumForPHAssetFramework <PBCoding>

@property (retain, nonatomic) UIImage *thumbImage;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableDictionary *assetsDic;
@property (nonatomic) long long albumPhotoCount;
@property (retain, nonatomic) NSString *albumName;
@property (nonatomic) BOOL isThumbUpdated;
@property (nonatomic) BOOL isPhotoCountUpdated;
@property (nonatomic) BOOL isNameUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_assetsDic;
+ (void)PBArrayAdd_albumPhotoCount;
+ (void)PBArrayAdd_albumName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithIdentifier:(id)a0;
- (void)onMemoryWarning;
- (id)fetchThumbImage;
- (void)updateThumbImage:(id)a0;
- (void)updateAssetId:(id)a0 atIndex:(unsigned long long)a1;
- (void)retriveCoverImageWithAsyncBlock:(id /* block */)a0;
- (void)retrivePhotoCountWithAsyncBlock:(id /* block */)a0;
- (id)albumId;
- (id)name;
- (id)coverImage;
- (unsigned long long)photosCount;
- (id)assetOfIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
