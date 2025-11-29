@class DUXBasicSheet, NSArray, NSString, UIView, UIViewController;
@protocol AWEIMShareTextViewProtocol, AWEShareTextInputViewManagerDelegate;

@interface AWEShareTextInputViewManager : NSObject <AWEIMShareTextViewDelegate, AWEShareTextInputViewProtocol>

@property (retain, nonatomic) UIView<AWEIMShareTextViewProtocol> *shareTextInputView;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double sheetHeight;
@property (nonatomic) double sharePanelViewHeight;
@property (nonatomic) double topOffset;
@property (nonatomic) double normalHeight;
@property (weak, nonatomic) UIView *topView;
@property (weak, nonatomic) id<AWEShareTextInputViewManagerDelegate> viewManagerDelegate;
@property (nonatomic) BOOL enableBigEmoji;
@property (nonatomic) BOOL enableLeftEmoticonSelection;
@property (nonatomic) BOOL didPastedBeforeSend;
@property (nonatomic) double keyboardShowDurationBeforeSend;
@property (nonatomic) double currentKeyboardShowTime;
@property (nonatomic) long long characterChangedCountBeforeSend;
@property (nonatomic) long long currentInputViewTextLength;
@property (nonatomic) double inputMethodUseTime;
@property (nonatomic) BOOL keyboardShowing;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (readonly, nonatomic) NSArray *extraAsynchronousGestures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didClickedEmoticonControlButtonToStatus:(unsigned long long)a0;
- (void)p_hideKeyboard;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)tapMaskView;
- (BOOL)isInputViewShowing;
- (id)getSelectedShareList;
- (void)startSendMessageWithShareContext:(id)a0 shareList:(id)a1 extraText:(id)a2 needCreateGroup:(BOOL)a3;
- (void)updateHeightIfNeededWithKeyboardHeight:(double)a0 animated:(BOOL)a1;
- (id)getShareContext;
- (void)didPasted;
- (void)removeTextInputView;
- (void)shareTextInputViewShowWithViewController:(id)a0 withModel:(id)a1 withTopOffset:(double)a2 topView:(id)a3 withType:(unsigned long long)a4 delegate:(id)a5;
- (void)updateButtonTypes:(id)a0;
- (double)shareInputViewHeight;
- (void)p_updateSheetHeightWithShareViewHeight:(double)a0 keyboardHeight:(double)a1 animated:(BOOL)a2;
- (BOOL)needExtraBottomOffsetForSafeArea;
- (void)updateSharePanelLayout;
- (void)updateShareTextViewLayout:(double)a0;
- (void)updateSheetLayout;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)a0;

@end
