@class NSString, NSDictionary, AWEUITextLoadingView, NSNumber, CAKModalTransitionDelegate;

@interface AWEMediaUploadTool : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) long long maxSelectNumber;
@property (retain, nonatomic) NSNumber *maxFileSize;
@property (nonatomic) unsigned long long bitrate;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *authKey;
@property (copy, nonatomic) NSString *uploadPath;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSDictionary *authInfo;
@property (copy, nonatomic) NSString *callerURL;
@property (retain, nonatomic) NSDictionary *configModel;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) NSDictionary *originParam;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) unsigned long long videoPlayURLRetryCount;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (nonatomic) unsigned long long currentUploadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUploadMediaTool;
+ (void)getUploadVideoConfig:(id /* block */)a0;
+ (id)topViewController;

- (void)dismissLoadingView;
- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewController:(id)a0 didClickAlbumAssetCell:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (id)albumViewControllerConfigForHeader:(id)a0;
- (void)uploadMediaWithParams:(id)a0 compeletion:(id /* block */)a1;
- (unsigned long long)p_actionTypeWithParam:(id)a0;
- (void)p_actionHandlerWithSourceType:(unsigned long long)a0 withParams:(id)a1;
- (id)p_actionTitleWithParam:(id)a0;
- (void)showImagePicker:(long long)a0 videoType:(unsigned long long)a1;
- (void)p_uploadMultiImage;
- (void)fetchPlayURLWithVideoInfo:(id)a0 videoMediaInfo:(id)a1;
- (void)fetchPlayURLWithVideoInfo:(id)a0 videoMediaInfo:(id)a1 completion:(id /* block */)a2;
- (void)p_uploadImageWithSelectImage:(id)a0;
- (void)p_uploadVideoWithSelectVideo:(id)a0;
- (void)imageSavedToPhotosAlbum:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)showLoadingView;

@end
