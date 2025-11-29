@class UIView, NSString, IESLivePlaybackCommentInputViewModel, IESLivePlaybackCommentConf, UIButton, IESLivePlaybackInputTextView, IESLivePlaybackCommentPanelViewModel, UILabel;
@protocol IESLiveLanguageService, NSObject;

@interface IESLivePlaybackCommentInputView : UIView <UITextViewDelegate, UIGestureRecognizerDelegate, IESLivePlaybackCommentInputProtocol>

@property (retain, nonatomic) UIView *commentTextBgView;
@property (retain, nonatomic) IESLivePlaybackInputTextView *commentTextView;
@property (retain, nonatomic) IESLivePlaybackCommentInputViewModel *inputViewModel;
@property (retain, nonatomic) IESLivePlaybackCommentPanelViewModel *panelViewModel;
@property (retain, nonatomic) IESLivePlaybackCommentConf *conf;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (nonatomic) long long maxChatInputCount;
@property (retain, nonatomic) UIButton *sendBtn;
@property (retain, nonatomic) UIButton *emoticonBtn;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } insertRange;
@property (retain, nonatomic) id<NSObject> textObserver;
@property (nonatomic) BOOL cancelUndoManagerFix;
@property (nonatomic) double minCommentTextHeight;
@property (nonatomic) double maxCommentTextHeight;
@property (retain, nonatomic) UIView *commentTextLeftSideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showBarrageComment;
@property (copy, nonatomic) id /* block */ didClickCommentSend;
@property (copy, nonatomic) id /* block */ onDismiss;
@property (retain, nonatomic) UILabel *placeHolderLabel;

- (void)bindViewModel;
- (void)refreshLayout:(long long)a0;
- (void)disableLocalizations;
- (BOOL)textViewIsFirstResponder;
- (void)updateTextField:(id)a0;
- (void)addTextViewObserver;
- (BOOL)checkTextViewIfReachMaxLengthWithInsertText:(id)a0 replaceLength:(long long)a1;
- (long long)lengthOfString:(id)a0;
- (void)didClickKeyboardReturnKey;
- (void)resignKeyboardResponder;
- (void)clearCommentInput;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realInputArea;
- (void)emoticonBtnUpdateForPortrait;
- (void)setupCommentTextView;
- (void)setupSubViewsForNew;
- (void)setupSubViewsConstranitForNew;
- (void)textViewTextDidChange:(id)a0;
- (BOOL)checkAnimatedEmojiOverMaxCount:(id)a0;
- (void)textViewSizeNeedUpdate;
- (void)emoticonBtnUpdateForLandscape;
- (id)hudMessageWithMaxInputCount:(long long)a0;
- (void)disableUseEmotion;
- (void)refreshLayoutForLandscape;
- (void)refreshLayoutForPortrait;
- (void).cxx_destruct;
- (void)showKeyboard;
- (BOOL)resignFirstResponder;
- (id)initWithViewModel:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)buildView;

@end
