@class NSString, NSArray, UIImage, PAGFile, MMFinderLiveAnchorCustomizeRewardPagFileLoader, MMFinderLiveTaskId, NSMutableArray, UIViewController, WCActionSheet, MMFinderLiveAnchorCustomizeRewardItem;
@protocol MMFinderLiveAnchorCustomizeRewardStyleSelectLogicDelegate;

@interface MMFinderLiveAnchorCustomizeRewardStyleSelectLogic : NSObject <WCActionSheetDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardItem *rewardItem;
@property (copy, nonatomic) NSString *selectedSkinId;
@property (copy, nonatomic) NSString *customText;
@property (nonatomic) long long customImageIndex;
@property (retain, nonatomic) UIImage *originCustomImage;
@property (retain, nonatomic) PAGFile *previewPagFile;
@property (retain, nonatomic) NSMutableArray *customImageCacheArray;
@property (nonatomic) BOOL isNeedSelectImage;
@property (nonatomic) struct CGSize { double width; double height; } imageLayerSize;
@property (copy, nonatomic) NSString *defaultCustomText;
@property (nonatomic) unsigned int loadingResourceCount;
@property (retain, nonatomic) NSArray *rewardCustomizableAttributeArray;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardPagFileLoader *pagFileLoader;
@property (retain, nonatomic) WCActionSheet *chooseImageActionSheet;
@property (weak, nonatomic) UIViewController *hostingVc;
@property (weak, nonatomic) id<MMFinderLiveAnchorCustomizeRewardStyleSelectLogicDelegate> delegate;
@property (readonly, nonatomic) UIImage *customImage;
@property (readonly, nonatomic) BOOL isAnyStyleChanged;
@property (readonly, nonatomic) BOOL isCurStyleValid;
@property (readonly, nonatomic) BOOL isLoadingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 rewardItem:(id)a1 delegate:(id)a2;
- (void)updateCurrentSkinId:(id)a0;
- (void)updateCurrentAnimationWithUrl:(id)a0 identifier:(id)a1;
- (void)updateCurrentText:(id)a0;
- (id)getAlertMessageWithInputText:(id)a0;
- (BOOL)checkInputTextInvalid:(id)a0;
- (BOOL)isCharacterValid:(id)a0;
- (void)updateCurrentImageAtCacheArrayIndex:(long long)a0;
- (void)updateCurrentImage:(id)a0;
- (void)resetCustomImage;
- (void)preloadAllAnimationPagFile;
- (id)pagFileIdentifierWithSkinId:(id)a0;
- (void)refreshPreviewPagFile;
- (void)claimResourceLoadingStart;
- (void)claimResourceLoadingEnd;
- (void)chooseNewImage;
- (void)showChooseImageActionSheet;
- (void)showFinderCameraViewController;
- (void)showFinderImagePickerView;
- (void)commitCurrentStyle;
- (void)commitWithStyleValue:(id)a0;
- (BOOL)isSelectedSkinChanged;
- (BOOL)isCustomTextChanged;
- (BOOL)isCustomImageChanged;
- (BOOL)isCurColorValid;
- (BOOL)isCurTextValid;
- (BOOL)isCurImageValid;
- (id)selectedSkinAnimationUrl;
- (void)actionSheet:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithEditImageAttr:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onSightCameraCancel:(id)a0;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (BOOL)isFrontCamera;
- (void).cxx_destruct;

@end
