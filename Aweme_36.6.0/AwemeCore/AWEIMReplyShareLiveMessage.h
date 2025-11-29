@class NSArray, NSString, NSDictionary, NSAttributedString;

@interface AWEIMReplyShareLiveMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMQuoteReplyContentMessageProtocol>

@property (copy, nonatomic) NSArray *richTextInfos;
@property (retain, nonatomic) NSArray *templateArray;
@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSDictionary *roomCover;
@property (retain, nonatomic) NSDictionary *roomOwnerAvatar;
@property (copy, nonatomic) NSString *roomOwnerUID;
@property (copy, nonatomic) NSString *roomOwnerSecUID;
@property (copy, nonatomic) NSString *roomOwnerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSAttributedString *quoteAttributedContent;
@property (copy, nonatomic) NSString *quoteTitle;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)getContentDict;
- (id)contentComponentName;
- (id)calculateAttributedContent;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (id)invisibleString;
- (id)hintOnInputVCWhenQuoted;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (BOOL)contentIsAvailable;

@end
