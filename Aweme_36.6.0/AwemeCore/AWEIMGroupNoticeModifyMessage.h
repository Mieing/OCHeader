@class AWEIMLinkTextUtility, NSString, NSArray, NSAttributedString;

@interface AWEIMGroupNoticeModifyMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEIMLinkTextUtility *textUtility;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSArray *linkArray;
@property (retain, nonatomic) NSAttributedString *forwardPreviewAttributedText;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (copy, nonatomic) NSString *upgradedNoticeContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentAttributes;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)calculateAttributedContent;
- (id)linkArray;
- (BOOL)supportRefactorCell;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
