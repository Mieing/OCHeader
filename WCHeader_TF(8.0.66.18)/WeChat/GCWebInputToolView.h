@class UIView, EmojiInputView, NSArray, NSString, UIImageView, CEmoticonWrap, MMImage, UIButton;

@interface GCWebInputToolView : GameChatInputToolBaseView <MMImagePickerManagerDelegate, GCImgPreviewDelegate>

@property (retain, nonatomic) UIImageView *chooseImgView;
@property (nonatomic) BOOL isFromEmoticon;
@property (retain, nonatomic) UIView *emojiInputBGView;
@property (retain, nonatomic) EmojiInputView *emojiInputView;
@property (retain, nonatomic) NSArray *emojiList;
@property (retain, nonatomic) UIView *btmLineView;
@property (retain, nonatomic) UIButton *imgBtn;
@property (retain, nonatomic) UIButton *sendBtn;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (retain, nonatomic) MMImage *pickMmImage;
@property (nonatomic) BOOL stickBtmIfNonEmpty;
@property (nonatomic) BOOL isEmptyInput;
@property (nonatomic) BOOL canSendWithoutText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubViews;
- (void)onChooseImgSelect;
- (void)browserImage;
- (void)onGCPreviewDismiss;
- (void)onDeleteImage:(BOOL)a0 needShowInputView:(BOOL)a1;
- (void)onSendBtnClick;
- (void)onDidCommitEnd;
- (void)pickImg;
- (void)showImageEditor;
- (void)MMImagePickerManagerDidSkip:(id)a0;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)handleMMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)report12909WithWithScene:(long long)a0 uiArea:(long long)a1 position:(unsigned int)a2 action:(long long)a3 extInfo:(id)a4;
- (void)subclassOnShowInputView;
- (void)onExpressionButtonClicked:(id)a0;
- (void)showEmoticonView;
- (BOOL)canSelectEmoji:(id)a0;
- (BOOL)customeHandleEmoticonSelect:(id)a0;
- (void)tryChooseNewImg:(id)a0 pickMmImage:(id)a1 emoticonWrap:(id)a2;
- (void)didChooseNewImg:(id)a0 pickMmImage:(id)a1 emoticonWrap:(id)a2;
- (void)didChooseNewImg:(id)a0 pickMmImage:(id)a1 emoticonWrap:(id)a2 needShowInputView:(BOOL)a3;
- (void)checkReplaceImgTip:(id)a0 competionBlock:(id /* block */)a1;
- (void)onTextChange:(id)a0;
- (void)checkIsEmpty;
- (void)createEmojiInputViewIfNeed:(id)a0;
- (BOOL)needStickBtm;
- (void)layoutUI;
- (void)updateSelfHeight;
- (double)subClsAditionPubbleViewHeight;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 handler:(id /* block */)a3 btnTitle:(id)a4 handler:(id /* block */)a5;
- (void)forceClearInputContent;
- (void).cxx_destruct;

@end
