@class MsgReport;

@interface GameLifeMsgExtInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long disabledStaticPanelIdFlag;
@property (nonatomic) unsigned long long disabledAppPanelIdFlag;
@property (retain, nonatomic) MsgReport *msgReport;

+ (void)initialize;

@end
