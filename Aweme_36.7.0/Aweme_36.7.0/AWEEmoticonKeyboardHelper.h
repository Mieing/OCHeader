@class NSString, AWEGrowingTextView;
@protocol AWEEmoticonKeyboardHelperDelegate, AWETextInputControllerProtocol;

@interface AWEEmoticonKeyboardHelper : NSObject <AWEIMEmoticonKeyBoardDelegate, AWECommentMiniEmoticonPanelViewDelegate, AWECommentEmoticonKeyboardHelperProtocol>

@property (weak, nonatomic) AWEGrowingTextView *textView;
@property (weak, nonatomic) id<AWETextInputControllerProtocol> textInputController;
@property (weak, nonatomic) id<AWEEmoticonKeyboardHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)textInput:(id)a0 shouldDeleteTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)emoticonRegex;

- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1 theme:(id)a2 themeView:(id)a3 indexPath:(id)a4;
- (void)emoticonViewDidSelectDelete:(id)a0;
- (void)emoticonViewDidSendText:(id)a0;
- (void)emoticonViewDidTappedSearchItem:(id)a0;
- (void)trackLongPressPrevewEmoji:(id)a0 style:(long long)a1;
- (void)addCommentRecentlyUsedEmoticonsDataWithModel:(id)a0 theme:(id)a1;
- (void)addCommentRecentlyUsedEmoticonsDataWithMiniEmoticonModel:(id)a0;
- (void)miniEmoticonPanelView:(id)a0 didSelectEmoticon:(id)a1;
- (void)appendNewEmoticonWithPublishGuidanceEmoticonModel:(id)a0;
- (void)appendEmoticonWithTitle:(id)a0;
- (id)getPlainText;
- (id)getPlainTextWithAttributeString:(id)a0;
- (unsigned long long)getStickerTypeWithEmoticonModel:(id)a0 theme:(id)a1;
- (void)__updateTypingAttributes;
- (void).cxx_destruct;

@end
