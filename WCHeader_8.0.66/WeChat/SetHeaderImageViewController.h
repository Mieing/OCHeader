@class MMHeadImageView, NSString, CContact, UIButton, UILabel, UIView, MMTableView;
@protocol SetHeaderImageViewDelegate;

@interface SetHeaderImageViewController : MMUIViewController <MMSightCameraViewControllerDelegate, IContactMgrExt, UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate, MessageObserverDelegate> {
    MMTableView *m_tableView;
    MMHeadImageView *m_headView;
    UILabel *m_userNameLabel;
    UILabel *m_nickNameLabel;
    UILabel *m_remarkLabel;
    UILabel *m_dddedLabel;
    UIButton *m_opBtn;
    UIButton *m_RemarkBtn;
    UIButton *m_BlockBtn;
    UIView *m_headerView;
    UIView *m_footerView;
    BOOL m_bInContactsInit;
    BOOL m_bInContactsAfter;
    unsigned int m_uEventId;
    unsigned int m_uiUploadHeadEventID;
}

@property (retain, nonatomic) CContact *m_contact;
@property (weak, nonatomic) id<SetHeaderImageViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryGetContactUsrImg;
- (id)getSettingHeadImage;
- (void)updateHeadImage;
- (void)initMessageIdToListen;
- (void)initHeadImage;
- (void)updateNickNameLabel;
- (void)initNickNameLabel;
- (void)initUserNameLabel;
- (void)updateRemarkLabel;
- (void)initRemarkLabel;
- (void)updateRemarkBtn;
- (void)updateBlockBtn;
- (id)init;
- (void)initData;
- (void)initTableView;
- (void)initHeaderView;
- (void)initFooterView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateHead:(id)a0;
- (void)handleImage:(id)a0;
- (void)showImagePicker:(long long)a0;
- (void)showChangeImg:(id)a0;
- (void)onChangeImg:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onIKnowItBtnClick:(id)a0;
- (id)getViewController;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)modifyContactRemark:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)MessageReturn:(unsigned int)a0 MessageInfo:(id)a1 Event:(unsigned int)a2;
- (void)onModifyContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void).cxx_destruct;

@end
