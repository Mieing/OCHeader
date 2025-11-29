@class EmoticonBoardView, NSString;

@interface WAWebViewPlugin_InputEmoticon : WAWebViewPlugin_embedView <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonSearchViewControllerDelegate>

@property (retain, nonatomic) EmoticonBoardView *emoticonView;
@property (nonatomic) double panelDuration;
@property (nonatomic) BOOL isEmoticonViewShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setupEmoticonView;
- (void)setupNotifications;
- (void)onKeyboardWillShow;
- (BOOL)showEmotionEmojiPicker:(double)a0 ToShow:(BOOL)a1 EmotionBoardHeight:(double *)a2 finishButtonTitle:(id)a3;
- (BOOL)showEmotionPicker:(double)a0 ToShow:(BOOL)a1 EmotionBoardHeight:(double *)a2;
- (BOOL)showEmotionView:(double)a0 ToShow:(BOOL)a1 viewType:(int)a2 EmotionBoardHeight:(double *)a3 finishButtonTitle:(id)a4;
- (void)hideKeyBoardIfShown;
- (void)showEmotionView:(int)a0;
- (void)hideEmotionView;
- (void)sendEmotionTextToJs:(id)a0;
- (void)onSendButtonClicked;
- (void)didSelectorEmoticon:(id)a0;
- (void)deleteEmoticon;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)sendOnKeyboardHeightChangeEventWithHeight:(double)a0 duration:(double)a1;
- (void).cxx_destruct;

@end
