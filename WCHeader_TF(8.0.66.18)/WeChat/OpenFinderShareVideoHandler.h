@class WCFinderCreateCoordinator, NSString, NSMutableArray, WCFinderJumpInfo;

@interface OpenFinderShareVideoHandler : OpenFinderBaseHandler <IAppDataExt, WCEditVideoViewControllerDelegate, WCFinderPostViewControllerDelegate, WCFinderCreateCoordinatorDelegate, WCFinderLongVideoChooseHelperDelegate>

@property (retain, nonatomic) NSMutableArray *mmAssetArray;
@property (copy, nonatomic) NSString *extLinkUrl;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) WCFinderCreateCoordinator *createCoordinator;
@property (nonatomic) unsigned long long enterEditImageViewTime;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createOpenUrl;
- (id)genBlockVC;
- (void)initJumpInfo;
- (void)OnAppInfoChanged:(id)a0;
- (void)onAuthRejectJumpInfo;
- (void)onAuthDidSuccess;
- (void)startShareVideo;
- (void)editVideoViewControllerDidCancel:(id)a0;
- (void)editVideoViewController:(id)a0 didFinishEditingVideo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)presentFinderPostViewControllerWithPostSession:(id)a0 presentAnimated:(BOOL)a1;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
- (void)postViewControllerCancelPostWithModel:(id)a0;
- (void)postViewControllerStartUpload;
- (void)finderCreateAccountSuccess:(id)a0;
- (void)finderRealNameSuccess:(id)a0;
- (void)triggerFinderPostActionWith:(id)a0;
- (void)backTo3rdApp;
- (void)backTo3rdAppWithExtMsg:(id)a0;
- (void)longVideoChooseHelper:(id)a0 postSession:(id)a1;
- (void).cxx_destruct;

@end
