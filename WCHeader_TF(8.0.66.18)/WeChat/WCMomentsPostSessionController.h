@class WCMomentsPostReportSession, WCMomentsTemplateShareInfo, MMUIViewController, NSString;
@protocol WCCommitViewAnimationDelegate;

@interface WCMomentsPostSessionController : NSObject <MMImagePickerManagerDelegate, WCVideoProducerViewControllerDelegate>

@property (weak, nonatomic) MMUIViewController<WCCommitViewAnimationDelegate> *hostViewController;
@property (retain, nonatomic) WCMomentsTemplateShareInfo *currentShareInfo;
@property (retain, nonatomic) WCMomentsPostReportSession *postReportSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)minDurationForVideoAsset;
+ (BOOL)willSelectHybridAssetsIfAdd:(id)a0 with:(id)a1;
+ (BOOL)willSelectMultiVideosIfAdd:(id)a0 with:(id)a1;
+ (BOOL)willExceedSumAssetsCountIfAdd:(id)a0 with:(id)a1;
+ (BOOL)willExceedSumDurationIfAdd:(id)a0 with:(id)a1;
+ (BOOL)isLessThanMinDurationFor:(id)a0 with:(id)a1;
+ (BOOL)isAssetInfo:(id)a0 exceedSightDurationForPickerScene:(int)a1;
+ (BOOL)showAlertWithText:(id)a0;
+ (id)createVideoProducerVMWithAssetList:(id)a0 createSameInfo:(id)a1 postReportSession:(id)a2 activityEventType:(unsigned int)a3;
+ (id)safeCompositionAttrFromAssetInfo:(id)a0;
+ (unsigned long long)_convertSightSceneFromPickerScene:(int)a0;

- (id)initWithHostViewController:(id)a0 postReportSession:(id)a1;
- (void)showAssetPickerFromSourceType:(long long)a0 withShareInfo:(id)a1 showCamera:(BOOL)a2;
- (id)assetPickerController:(id)a0 willFinishPickingAssets:(id)a1 withCurrentState:(id)a2;
- (BOOL)_prepareAssetsForPost:(id)a0 withAssetPickerState:(id)a1 fromAssetPicker:(id)a2;
- (void)_prepareCompositeTask:(id)a0 withAsyncEnabled:(BOOL)a1 fromAssetPicker:(id)a2;
- (void)_syncHandleCompositeTask:(id)a0 fromAssetPicker:(id)a1;
- (void)_asyncHandleCompositeTask:(id)a0 fromAssetPicker:(id)a1;
- (void)_prepareVideoProducerWithAssetList:(id)a0 withCurrentState:(id)a1 fromAssetPicker:(id)a2;
- (void)_prepareVideoProducerVMWithAssetList:(id)a0 currentState:(id)a1 fromAssetPicker:(id)a2;
- (void)_startVideoProducerVCWithVM:(id)a0 fromAssetPicker:(id)a1;
- (void)_onPickNewSightDraft:(id)a0 withError:(id)a1 logNote:(id)a2 fromEntrance:(long long)a3 isAsyncComposite:(BOOL)a4;
- (void)videoProducerViewController:(id)a0 didFinishWithSightDraft:(id)a1 isAsyncComposite:(BOOL)a2;
- (void)videoProducerViewController:(id)a0 didCancelAfterCleanUp:(BOOL)a1;
- (id)assetPickerController:(id)a0 willChangeUserActionCheckTo:(BOOL)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 didChangeUserActionCheckTo:(BOOL)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 willLoadPreviewForAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 didLoadPreviewForAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 willSelectAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 didSelectAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 willDeselectAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 didDeselectAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 willEditVideoAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 didEditVideoAsset:(id)a1 byEditAttr:(id)a2 withCurrentState:(id)a3;
- (id)_onAssetPickerDidChangeAssetSelection:(id)a0 withCurrentState:(id)a1;
- (void)onImagePickerManagerDidAppear;
- (void)onImagePickerManagerStartPreview;
- (void)onImagePickerManagerStartEditing;
- (void)onImagePickerManagerStartExportingWithAssetId:(id)a0;
- (void)onImagePickerManagerEndExportingWithAssetId:(id)a0 error:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)clearPostReportSession;
- (void)cancelAndClearPostReportSession;
- (void).cxx_destruct;

@end
