@class NSString;

@interface WCPayTransferMessageViewModel : WCPayBaseMessageViewModel

@property (nonatomic) double groupTransferBubbleHeight;
@property (readonly, nonatomic) NSString *bgImageName;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)getRevokeMsgCustomizeActionSheet;
- (id)sourceTitle;
- (id)sourceTag;
- (id)descText;
- (id)titleText;
- (id)innerTitleText;
- (id)getGroupTransferTitleText;
- (long long)getFeeDescLength;
- (id)getGroupTransferNicknameWithContact:(id)a0;
- (double)iconSize;
- (unsigned long long)bubbleType;
- (id)iconName;
- (BOOL)isGroupTransferMsgOrOpenim;
- (BOOL)isGroupTransferMsgForMe;
- (double)getGroupTransferBubbleHeight;
- (BOOL)isGroupTransferMsgOutSider;
- (BOOL)isTransferBubbleFromReceiver;
- (BOOL)hasTransferAddress;
- (BOOL)shouldShowAddressIcon;
- (BOOL)isUnHandleTransferMsgSendFromMe;
- (unsigned int)msgStatus;
- (id)additionalAccessibilityDescription;
- (void).cxx_destruct;

@end
