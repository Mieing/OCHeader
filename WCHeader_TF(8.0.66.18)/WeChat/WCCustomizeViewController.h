@class MMTableView, NSString, WCTableViewManager, WCFinderDataItem, WCCoverPostReporter, NSMutableArray;

@interface WCCustomizeViewController : MMUIViewController <MMSightCameraViewControllerDelegate, WCFinderFeedPickerViewControllerDelegate, MMImageLoaderObserver, WCFinderFeedPickerPreviewViewControllerDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate> {
    BOOL m_isUploading;
    WCTableViewManager *m_tableViewMgr;
}

@property (retain, nonatomic) WCFinderDataItem *finderFeed;
@property (retain, nonatomic) WCCoverPostReporter *coverPostReporter;
@property (nonatomic) BOOL canShowProfessionalCraft;
@property (retain, nonatomic) NSMutableArray *m_rowsData;
@property (retain, nonatomic) MMTableView *m_tableView;
@property (retain, nonatomic) NSString *m_username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reloadRowData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)popToMessageSessionView;
- (void)onFinishedSelectImage:(id)a0;
- (id)getViewController;
- (id)getNavigationController;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)handleDidFinishPickingSightWithInfo:(id)a0;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onClickSelectFromAlbum;
- (void)onClickTakePhoto;
- (void)onClickProfessionalCraft;
- (void)showImagePicker:(long long)a0;
- (void)onClickSelectFromFinder;
- (void)finderFeedPickerViewControllerDidClickCancel:(id)a0;
- (void)finderFeedPickerPreviewViewController:(id)a0 didClickDoneWithDataItem:(id)a1;
- (void)onFinishedSelectFinderFeed:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (long long)coverContentSourceFromFinderTabType:(int)a0;
- (void).cxx_destruct;

@end
