@class UIView, NSString, ACCSocialStickerBindingController, UIImageView, ACCSocialStickerModel, ACCSocialStickeMentionBindingModel, UITextField, ACCSocialStickerViewViewModel, UILabel;
@protocol ACCStickerContainerProtocol;

@interface ACCSocialStickerView : UIView <UIGestureRecognizerDelegate, ACCSocialStickerBindingDelegate, ACCStickerEditContentProtocol>

@property (nonatomic) BOOL enableEdit;
@property (nonatomic) struct CGPoint { double x; double y; } editCenter;
@property (nonatomic) double currentScale;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UITextField *inputTextView;
@property (retain, nonatomic) UILabel *iconFontLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *iconFontImageView;
@property (retain, nonatomic) ACCSocialStickerViewViewModel *viewModel;
@property (retain, nonatomic) ACCSocialStickerBindingController *bindingController;
@property (retain, nonatomic) NSString *extra;
@property (readonly, nonatomic) ACCSocialStickerModel *stickerModel;
@property (readonly, nonatomic) unsigned long long stickerType;
@property (readonly, copy, nonatomic) NSString *socialStickerUniqueId;
@property (readonly, copy, nonatomic) NSString *currentSearchKeyword;
@property (readonly, nonatomic) ACCSocialStickeMentionBindingModel *currentMentionBindingModel;
@property (nonatomic) long long infoStickerId;
@property (copy, nonatomic) id /* block */ onSearchKeywordChanged;
@property (copy, nonatomic) id /* block */ onMentionBindingDataChanged;
@property (copy, nonatomic) id /* block */ onDidEndEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;

- (void)contentDidUpdateToScale:(double)a0;
- (id)copyForContext:(id)a0;
- (void)updateWithInstance:(id)a0 context:(id)a1;
- (void)updateKeyboardHeight:(double)a0;
- (void)bindingController:(id)a0 onTextChanged:(id)a1;
- (void)bindingControllerOnSearchKeywordChanged:(id)a0;
- (void)bindingControllerOnMentionBindingDataChanged:(id)a0;
- (BOOL)bindingWithMentionModel:(id)a0;
- (BOOL)bindingWithHashTagModel:(id)a0;
- (void)restoreToSuperView:(id)a0 animationDuration:(double)a1 animationBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)updateEdtingFrames;
- (id)gradientColorImageFromColors:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 gradientRect:(long long)a2;
- (void)bindInputAccessoryView:(id)a0;
- (void)transportToEditWithSuperView:(id)a0 animation:(id /* block */)a1 animationDuration:(double)a2;
- (id)initWithStickerModel:(id)a0 socialStickerUniqueId:(id)a1;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setupUI;
- (void)setupData;
- (void)updateFrame;

@end
