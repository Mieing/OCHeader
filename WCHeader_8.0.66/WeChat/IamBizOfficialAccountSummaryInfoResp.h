@class NSString;

@interface IamBizOfficialAccountSummaryInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *digest;
@property (nonatomic) unsigned int unreadCount;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *lastSenderDisplayName;
@property (nonatomic) BOOL isShowNotify;
@property (nonatomic) unsigned long long msgId;

+ (void)initialize;

@end
