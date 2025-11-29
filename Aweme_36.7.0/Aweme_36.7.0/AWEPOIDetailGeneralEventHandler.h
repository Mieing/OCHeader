@class UIViewController, NSString, DitoPageContext, AWEModalTransitionDelegate, AWETranslationTransitionController;

@interface AWEPOIDetailGeneralEventHandler : NSObject <AWEPOIImagePickerViewControllerDelegate, AWEPOIImageUploadPreviewViewControllerDelegate>

@property (weak, nonatomic) UIViewController *baseViewController;
@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) AWETranslationTransitionController *nextTranslationTransitionDelegate;
@property (copy, nonatomic) NSString *uploadImageBtnEnterMethod;
@property (weak, nonatomic) DitoPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_uploadHeaderImageWithContext:(id)a0 baseVC:(id)a1 delegate:(id)a2 transitionDelegate:(id)a3;

- (void)rx_store:(id)a0 didSetWithModule:(id)a1;
- (id)poiDetail;
- (id)constData;
- (void)p_bindActionAndState;
- (void)p_gotoMapViewController;
- (void)p_openImageUploadPreviewViewController:(id)a0;
- (void)p_createVideoWithContext:(id)a0;
- (void)p_uploadHeaderImageWithContext:(id)a0;
- (void)imagePicker:(id)a0 didSelectImages:(id)a1 assetModels:(id)a2;
- (void)photoUploaderDidFinishUploadingImages:(id)a0;
- (void).cxx_destruct;
- (id)store;
- (id)initWithBaseViewController:(id)a0;

@end
