@class NSString, WCFinderGetWechatHDHeadFetcher, WCFinderHeadImageView, FinderNewUserPrepareResponse, WCTableViewManager, WCFinderContact;

@interface WCFinderSettingViewController : MMUIViewController <WCFinderContactExt, WCFinderNameEditorViewControllerDelegate, WCFinderUserPrepareCgiDelegate, MMRegionPickerViewControllerDelegate, MMImageCropperDelegate>

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) WCFinderHeadImageView *imageView;
@property (retain, nonatomic) WCFinderGetWechatHDHeadFetcher *wechatHDHeadFetcher;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepareResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)configureTableView;
- (void)reloadTableView;
- (void)makeEditHeadImageCell:(id)a0 cellInfo:(id)a1;
- (void)requestData;
- (id)makeSectionSeparator;
- (void)clickEditHeadImageCell;
- (void)clickNameCell;
- (void)longPressFinderIdCell;
- (void)clickOldVersionEditLocationCell;
- (void)clickEditBirthCell;
- (void)clickEditSexCell;
- (void)clickSignature;
- (void)clickCoverSetting;
- (void)continueCleanCover;
- (void)continueModCover:(id)a0 userCancel:(BOOL)a1 error:(id)a2;
- (void)onModCoverSuccess;
- (BOOL)enableEditPersonalInfo;
- (void)pickLocation:(id)a0;
- (void)NSStringSelectViewControllerOnModifySex:(id)a0;
- (void)onCamera;
- (void)onPhotoLibrary;
- (id)createImagePickerObj:(long long)a0 isAvatar:(BOOL)a1;
- (void)onSelectAvatarFromWechat;
- (void)loadImageToEditor:(id)a0;
- (void)imageCropper:(id)a0 didFinished:(id)a1;
- (void)imageCropperDidCancel:(id)a0;
- (void)MMRegionPickerDidChoosRegion:(id)a0;
- (void)handleImage:(id)a0;
- (id)generateCGImageFromImage:(id)a0;
- (void)userPrepareCgi:(id)a0 didGetResponse:(id)a1;
- (void)userPrepareCgi:(id)a0 didFailWithError:(id)a1;
- (void)onFinderContactUpdate:(id)a0;
- (void).cxx_destruct;

@end
