@class NSString;

@interface WAReportAppMessageItem : WAReportBaseItem

@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int chatType;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned int chatRoomUserCount;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *senderUsername;
@property (retain, nonatomic) NSString *enterPath;
@property (nonatomic) unsigned long long exposePeriod;
@property (nonatomic) BOOL hasRelievedBuyFlag;
@property (nonatomic) BOOL hasFlagshipFlag;
@property (nonatomic) BOOL hasFinancialLicenseFlag;
@property (retain, nonatomic) NSString *scoreNum;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
