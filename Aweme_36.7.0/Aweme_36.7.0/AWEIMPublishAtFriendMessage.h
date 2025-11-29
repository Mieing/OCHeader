@class NSString, NSAttributedString;

@interface AWEIMPublishAtFriendMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMTextQuoteMessageProtocol>

@property (copy, nonatomic) NSAttributedString *contentTextString;
@property (copy, nonatomic) NSAttributedString *quoteTextString;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *contentTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributedContent;
- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)calculateAttributedContent;
- (BOOL)supportRefactorCell;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (id)hintOnInputVCWhenQuoted;
- (id)publishUserName;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)contentAttributes;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
