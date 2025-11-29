@class NSArray, UIImage, UIView, NSMutableArray;
@protocol IESLiveRoomService;

@interface IESLiveVSPhotoPickerMananger : NSObject

@property (retain, nonatomic) UIImage *qrCode;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSArray *phAssets;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) UIView *saveContainer;

- (id)createBottomView;
- (id)saveImage:(id)a0;
- (id)localImages;
- (id)getAllLocalPhotos;
- (id)createListView:(id)a0 title:(id)a1;
- (void)checkAuthorizationAndFetchAssets;
- (id)createSaveViewWith:(id)a0;
- (id)getPhotosAssetInCollection:(id)a0;
- (void)fetchQrCode;
- (void)loadLocalPhotos;
- (id)toSaveView:(id)a0;
- (void)savePhotoToAlbum:(id)a0 view:(id)a1;
- (void)photoPathAtIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)transAssetToImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
