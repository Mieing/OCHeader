@class NSString, UIView;
@protocol AWEIMEmoticonContainerViewProtocol;

@interface LSIMEmojiInputViewServiceImpl : NSObject <AWEIMEmoticonKeyBoardDelegate, LSIMEmojiInputViewService>

@property (retain, nonatomic) UIView<AWEIMEmoticonContainerViewProtocol> *emojiInputView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *associateTextView;

- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1 theme:(id)a2 themeView:(id)a3 indexPath:(id)a4;
- (void)emoticonViewDidSelectDelete:(id)a0;
- (void)emoticonViewDidSendText:(id)a0;
- (BOOL)shouldShowEmojiInputView;
- (id)createEmojiInputView;
- (void).cxx_destruct;

@end
