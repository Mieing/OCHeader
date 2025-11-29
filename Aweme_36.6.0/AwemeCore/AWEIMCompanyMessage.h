@class NSString, NSDictionary, AWEIMLinkTextUtility;

@interface AWEIMCompanyMessage : AWEIMMessage <AWEIMEmotionCareBotFeedbackMessageProtocol, AWEIMMessageConfigProtocol, AWEIMTextLinkMessageProtocol>

@property (copy, nonatomic) NSString *originContent;
@property (retain, nonatomic) NSDictionary *actions;
@property (retain, nonatomic) AWEIMLinkTextUtility *textUtility;
@property (nonatomic) long long emotionCareBotFeedbackDisplayStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *pushDetail;

+ (id)getSearchMsgContent:(id)a0;
+ (BOOL)searchMsgAvailable:(id)a0;
+ (BOOL)searchMsgCountAvailable:(id)a0;
+ (id)getDisplayContentWithContentDict:(id)a0;

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
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
