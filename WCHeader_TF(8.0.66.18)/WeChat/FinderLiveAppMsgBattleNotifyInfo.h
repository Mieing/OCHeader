@class NSString;

@interface FinderLiveAppMsgBattleNotifyInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int notifyScene;
@property (retain, nonatomic) NSString *notifyMsg;
@property (nonatomic) unsigned int battleLayout;
@property (nonatomic) unsigned long long notifyVersion;

+ (void)initialize;

@end
