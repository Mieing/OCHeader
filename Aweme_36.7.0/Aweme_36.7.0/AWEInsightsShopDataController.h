@class CAKModalTransitionDelegate, NSString, NSDictionary, NSTimer, UIViewController, NSNumber, AWEInsightsShopUploadImagePickerController;

@interface AWEInsightsShopDataController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (retain, nonatomic) AWEInsightsShopUploadImagePickerController *pickerController;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *uploadParameters;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (nonatomic) double compressRatio;
@property (weak, nonatomic) UIViewController *baseViewController;
@property (nonatomic) long long source;
@property (nonatomic) unsigned long long dataThreshold;
@property (copy, nonatomic) NSString *jsbUniqueId;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isFromImagePicker;
@property (copy, nonatomic) NSString *uploadPath;
@property (retain, nonatomic) NSNumber *maxFileSize;
@property (nonatomic) BOOL isSafeApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewController:(id)a0 didClickAlbumAssetCell:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (void)openPhotoAlbum;
- (id)errorToastOfImage:(id)a0 imageFileSize:(double)a1;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)uploadImage:(id)a0;

@end
