@class NSString, MultiTalkScreenSharingPresentationViewController, MMHalfScreenGuideView;
@protocol MultiTalkScreenSharingLogicDelegate;

@interface MultiTalkScreenSharingLogic : NSObject <MMHalfScreenGuideViewDelegate, WCFileBrowseDelegate, UIDocumentPickerDelegate, MultiTalkScreenSharingPreparationViewControllerDelegate, MultiTalkScreenSharingPresentationViewControllerDelegate>

@property (retain, nonatomic) MMHalfScreenGuideView *guideView;
@property (weak, nonatomic) MultiTalkScreenSharingPresentationViewController *presentingPresentationViewController;
@property (readonly, nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) id group;
@property (readonly, nonatomic) NSString *chatroomName;
@property (readonly, nonatomic) NSString *reportGroupId;
@property (readonly, weak, nonatomic) id<MultiTalkScreenSharingLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanUp;
- (void)updateTalkingUsernames:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)shareFile;
- (BOOL)shouldShowBadge;
- (BOOL)hasShowedGuide;
- (void)didShowGuide;
- (BOOL)showGuideIfNeeded;
- (id)fileDetailLogicControllerWithBrowseInfo:(id)a0;
- (id)fileDetailLogicControllerWithFileURL:(id)a0;
- (BOOL)supportsFileTypeForLogicController:(id)a0;
- (BOOL)supportsPDFFileWithPath:(id)a0;
- (void)showToastIfFileTypeNotSupported;
- (id)createFileDetailViewControllerWithLogicController:(id)a0;
- (void)openFileBrowser;
- (void)openDocumentPickerViewController;
- (void)openFilePreparationFromViewController:(id)a0 withBrowseInfo:(id)a1;
- (void)openFilePreparationFromViewController:(id)a0 withFileURL:(id)a1;
- (void)openFilePresentationFromViewController:(id)a0 withBrowseInfo:(id)a1;
- (void)openFilePresentationFromViewController:(id)a0 withFileURL:(id)a1;
- (void)shareBlackboard;
- (void)openBlackboardPresentation;
- (void)guideView:(id)a0 cancelButtonDidClick:(id)a1;
- (void)guideView:(id)a0 acceptButtonDidClick:(id)a1;
- (void)onFileBrowser:(id)a0 clickFile:(id)a1;
- (void)onFileBrowseOpeniCloud;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (void)screenSharingPreparationViewControllerDidStartPresentation:(id)a0;
- (void)screenSharingPresentationViewController:(id)a0 didClickPenButton:(BOOL)a1;
- (void)screenSharingPresentationViewController:(id)a0 didClickMicrophoneButton:(BOOL)a1;
- (void)screenSharingPresentationViewController:(id)a0 didClickSpeakerButton:(BOOL)a1;
- (void)screenSharingPresentationViewController:(id)a0 viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a1;
- (void)screenSharingPresentationViewController:(id)a0 viewDidTransitionToSize:(struct CGSize { double x0; double x1; })a1;
- (void)screenSharingPresentationViewControllerWillDismiss:(id)a0;
- (void)screenSharingPresentationViewControllerDidStartSharing:(id)a0;
- (void)screenSharingPresentationViewControllerDidStopSharing:(id)a0;
- (void)screenSharingPresentationViewControllerDidPauseSharing:(id)a0;
- (void)screenSharingPresentationViewControllerDidResumeSharing:(id)a0;
- (void).cxx_destruct;

@end
