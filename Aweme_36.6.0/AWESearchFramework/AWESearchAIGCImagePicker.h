@class NSString, NSDictionary, UIImage, CAKAlbumViewController, ACCAlbumConfigure, UIViewController;
@protocol AWESearchHomeNewStyleSearchBarControllerDelegate, AWESearchAIGCImagePickerDelegate;

@interface AWESearchAIGCImagePicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, AWESearchAIGCImageConfirmViewControllerDelegate, AWESearchSSImageConfirmViewControllerDelegate, AWESearchAIGCImagePickerProtocol>

@property (copy, nonatomic) id /* block */ pickCompletion;
@property (weak, nonatomic) id<AWESearchHomeNewStyleSearchBarControllerDelegate> fromContainer;
@property (retain, nonatomic) NSDictionary *jumpExtraInfo;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIImage *pickedImage;
@property (retain, nonatomic) ACCAlbumConfigure *albumConfig;
@property (retain, nonatomic) CAKAlbumViewController *albumVC;
@property (retain, nonatomic) UIViewController *albumTopVC;
@property (retain, nonatomic) NSString *queryText;
@property (nonatomic) BOOL isAlbumOpen;
@property (nonatomic) BOOL isCameraOpen;
@property (nonatomic) BOOL albumShouldShowKeywords;
@property (nonatomic) BOOL cameraShouldShowKeywords;
@property (nonatomic) BOOL isPickFromCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESearchAIGCImagePickerDelegate> delegate;
@property (nonatomic) BOOL shouldNotResumeSearchBar;

+ (id)nextTranslationTransitionDelegate;
+ (id)p_create_simple_composer_model;

- (id)setupCameraCellConfig;
- (void)openAlbum;
- (void)confirmImageWithImageConfirmViewController:(id)a0;
- (void)sendQueryWithImageConfirmViewController:(id)a0 text:(id)a1;
- (void)openCameraWithKeywordsDisplay:(BOOL)a0;
- (void)closeAlbumOrCamera;
- (void)cameraDismiss;
- (void)albumDismiss;
- (BOOL)isAIDouyinNewCameraFramework;
- (void)openNewImageConfirmViewController:(id)a0;
- (void)sendQueryWithText:(id)a0;
- (void)directSearchWithQuery:(id)a0;
- (void)pickImageFromAlbumWithKeywordsDisplay:(BOOL)a0 Completion:(id /* block */)a1;
- (void)pickImageFromCameraWithKeywordsDisplay:(BOOL)a0 Completion:(id /* block */)a1;
- (void)pickImageFromCameraWithKeywordsDisplay:(BOOL)a0 fromContainer:(id)a1 enterFrom:(id)a2 jumpExtraInfo:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)releaseResource;
- (id)init;

@end
