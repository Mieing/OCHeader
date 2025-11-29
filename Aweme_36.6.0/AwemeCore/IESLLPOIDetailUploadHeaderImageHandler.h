@class NSString, AWEModalTransitionDelegate;

@interface IESLLPOIDetailUploadHeaderImageHandler : NSObject <AWEPOIImagePickerViewControllerDelegate, AWEPOIImageUploadPreviewViewControllerDelegate>

@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_uploadHeaderImageWithContext:(id)a0 baseVC:(id)a1 delegate:(id)a2 transitionDelegate:(id)a3;
- (void)imagePicker:(id)a0 didSelectImages:(id)a1 assetModels:(id)a2;
- (void)photoUploaderDidFinishUploadingImages:(id)a0;
- (void)openPOIImageUploadPreviewViewController:(id)a0 pageCotext:(id)a1 poiDetail:(id)a2 baseVC:(id)a3;
- (void).cxx_destruct;

@end
