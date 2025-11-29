@class NSString, NSAttributedString;

@interface AWEIMTextAndButtonMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) NSAttributedString *attributedBodyText;
@property (nonatomic) double bodyTextHeight;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)messageClassForContentDict:(id)a0;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (id)displayTextWithType:(long long)a0;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)canEmojiReplyByDefault;
- (id)defaultMenuTypeList;
- (id)supportMessageMenuTypeList;
- (long long)messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
