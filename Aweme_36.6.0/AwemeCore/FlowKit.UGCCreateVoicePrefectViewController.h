@interface FlowKit.UGCCreateVoicePrefectViewController : FlowCommon.FlowBaseViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _trackerProvider;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ cellHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_publishButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ avatarLoadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateAvatarButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceCreateView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isVoicePlaying;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playingViewContainer;
    void /* unknown type, empty encoding */ ttsPlayingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceStateIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceLoadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceStateLabel;
    void /* unknown type, empty encoding */ updateVoiceAlertVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceNameEditContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_whoCanUseLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorityTableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorityTipView;
    void /* unknown type, empty encoding */ hitNotPass;
}

- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)textFieldDidChanged:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)avatarViewClicked;
- (void)voiceCreateViewClick;
- (void)updateAvatar;
- (void)publish;
- (void)closeButtonAction;
- (void)back;
- (void)clickEditView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
