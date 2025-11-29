@class NSString, NSDictionary, LSIMBizMessage;

@interface LSIMMessageCardTextLinkCellVM : LSIMMessageCardBaseCellVM <LSIMMessageTextCellVM>

@property (copy, nonatomic) NSString *normalText;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *linkURL;
@property (copy, nonatomic) NSDictionary *linkURLs;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isReported;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL disableCopy;
@property (readonly, nonatomic) LSIMBizMessage *message;
@property (readonly, nonatomic) unsigned long long combineStyle;
@property (readonly, nonatomic) BOOL shouldShowTopTime;
@property (readonly, nonatomic) double createTime;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) BOOL isRobotMessage;
@property (readonly, nonatomic) BOOL isSelfSide;
@property (readonly, nonatomic) BOOL isMerchantUser;
@property (readonly, nonatomic) BOOL hasAvatar;
@property (readonly, nonatomic) BOOL shouldShowAvatar;
@property (readonly, copy, nonatomic) NSString *avatarURLString;
@property (readonly, nonatomic) BOOL shouldShowUserInfo;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, copy, nonatomic) NSString *userTagString;
@property (readonly, nonatomic) BOOL shouldShowFooter;
@property (readonly, nonatomic) unsigned long long footerStyle;
@property (readonly, nonatomic) long long messageStatus;
@property (nonatomic) unsigned long long readStatus;
@property (readonly, nonatomic) unsigned long long userMsgFooterStatus;
@property (readonly, nonatomic) BOOL shouldShowRiskContent;
@property (readonly, copy, nonatomic) NSString *riskContent;
@property (readonly, nonatomic) BOOL isRecalled;
@property (readonly, copy, nonatomic) NSDictionary *originExtDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackCellShow;
- (void)handleMessage;
- (void)sendIMMessage;
- (void)containerDidTapped;
- (void)openWebURL:(id)a0;
- (BOOL)hasSendMethod;
- (void).cxx_destruct;

@end
