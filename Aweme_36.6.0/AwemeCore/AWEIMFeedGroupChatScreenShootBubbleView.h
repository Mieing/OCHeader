@class AWEIMEncryptedImageMessage, AWEIMShareGroupChatScreenShootModel, NSString, UILabel, AWEIMRefreshImageView;

@interface AWEIMFeedGroupChatScreenShootBubbleView : UIView <AWEIMFeedGroupChatScreenShootBubbleViewProtocol>

@property (retain, nonatomic) AWEIMEncryptedImageMessage *imageMessage;
@property (retain, nonatomic) AWEIMShareGroupChatScreenShootModel *chatScreenModel;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) AWEIMRefreshImageView *iconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithMessage:(id)a0;
- (void)p_didclickBubble;
- (void)p_trackClickBubbleEvent:(id)a0;
- (BOOL)isAllowShowShootBubbleView:(id)a0;
- (void)configIconImageWithChatShootModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
