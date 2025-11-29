@class NSString, AWEIMMessageConversation, UIStackView;
@protocol AWEIMFeedBottomInputBarDelegate;

@interface AWEIMFeedBottomQuickEmojiInputBar : AWEIMPrivateMessageInputView <AWEIMPrivateMessageInputViewDelegate, AWEIMFeedBottomInputBarProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *fastReplyType;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) id<AWEIMFeedBottomInputBarDelegate> inputBarDelegate;
@property (readonly, nonatomic) UIStackView *rightButtonsContainer;

- (void)layoutSubviews;
- (void)setAttributeText:(id)a0 placeholder:(id)a1;
- (void)didTapTextBGView:(id)a0;
- (void)privateMessageInputViewdidTapCameraButton:(id)a0;
- (void)privateMessageInputView:(id)a0 didTapEmoticonModel:(id)a1 index:(long long)a2;
- (void)privateMessageInputViewdidTapTextArea:(id)a0;
- (BOOL)shouldShowCameraButton;
- (void).cxx_destruct;
- (id)init;

@end
