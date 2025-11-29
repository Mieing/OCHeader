@class UIView, MMUIImageView, NSString, UIImage, MMGrowTextViewWithExtras, UIButton, MMUIView, RichTextView, SendVerifyMsgBusinessCardImageLogic, MMUIButton, CBaseContact;

@interface SettingSayHelloTipsPageSheet : MMPageSheetBaseView <MMGrowTextViewWithExtrasDelegate, CardImageBrowseViewControllerDelegate, WCActionSheetDelegate, SendVerifyMsgBusinessCardImageDelegate, ILinkEventExt>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUIView *verifyMsgEditView;
@property (retain, nonatomic) MMGrowTextViewWithExtras *tfVerifyMsg;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) MMUIButton *addVerifyImgBtn;
@property (retain, nonatomic) MMUIImageView *verifyMsgImgView;
@property (retain, nonatomic) MMUIButton *showVerifyImgBtn;
@property (retain, nonatomic) MMUIButton *verifyCoverBtn;
@property (retain, nonatomic) RichTextView *savedHelloMsgView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL isShowingKeyboard;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL hasEditHelloMsg;
@property (retain, nonatomic) CBaseContact *chatContact;
@property (retain, nonatomic) NSString *verifyContent;
@property (retain, nonatomic) UIImage *verifyMsgImage;
@property (retain, nonatomic) SendVerifyMsgBusinessCardImageLogic *businessCardImageLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChatContact:(id)a0;
- (void)layoutSubviews;
- (void)updateUI;
- (void)layoutUI;
- (void)initData;
- (void)initConfig;
- (void)initView;
- (void)setupVerifyMsgEditView;
- (void)updateSavedHelloMsgView;
- (void)pageSheetDidShow;
- (void)pageSheetDidAppear;
- (BOOL)isSendVerifyAddImageOpenSwitch;
- (void)updateDetailViewHeightAnimated:(BOOL)a0;
- (void)onKeyboradWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void)onConfirmButtonClick;
- (void)onShowVerifyImageBtnClick;
- (void)showVerifyImageView:(id)a0 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isHiddenDeleteButton:(BOOL)a2;
- (void)onClickVerifyImageCoverBtnClick;
- (void)onClickVerifyAddBtnClick;
- (void)onUploadBusinessCardImgFailFinish:(id)a0 scene:(unsigned int)a1;
- (void)onUploadBusinessCardImgSuccessFinish:(id)a0 cardImgItemInfo:(id)a1 scene:(unsigned int)a2;
- (void)onDownloadBusinessCardImg:(id)a0 success:(BOOL)a1 scene:(unsigned int)a2;
- (void)clickToSaveHelloMsg;
- (void)clickToSaveHelloMsgWithBusinessCardItem:(id)a0;
- (void)MMGrowTextViewWithExtrasBeginEditing:(id)a0;
- (void)onMMGrowTextViewWithExtrasTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)TextViewWithExtrasHeightDidChanged:(id)a0;
- (void)updateVerifyMsgEditViewWithExtrasHeightDidChanged;
- (void)onCardImageBrowseViewControllerDidDeleteImageAtIndex:(unsigned int)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)showImagePicker:(long long)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onMsgImgPickerViewControllerDidFinishSelectWithImageList:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onClickRichTextViewImageIcon:(id)a0 imageIconSrc:(id)a1 imageIconFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 richTextView:(id)a3;
- (void).cxx_destruct;

@end
