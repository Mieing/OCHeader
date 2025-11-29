@class NSString;

@interface FinderLiveAppMsgPromoteStatusInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long promoteId;
@property (nonatomic) unsigned int promoteType;
@property (retain, nonatomic) NSString *customId;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *statusTips;

+ (void)initialize;

@end
