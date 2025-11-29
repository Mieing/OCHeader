@class AWEIMLinkTextUtility, NSString, NSDictionary, NSArray;

@interface AWEIMTextLinkMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMTextLinkMessageProtocol>

@property (copy, nonatomic) NSString *originContent;
@property (retain, nonatomic) NSDictionary *actions;
@property (retain, nonatomic) AWEIMLinkTextUtility *textUtility;
@property (copy, nonatomic) NSArray *richTextInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *pushDetail;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)calculateAttributedContent;
- (id)linkArray;
- (BOOL)supportRefactorCell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)shouldShowNicknameWithMessageType;
- (void)p_trackClickEvent;
- (id)p_receiverUid:(id)a0;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
