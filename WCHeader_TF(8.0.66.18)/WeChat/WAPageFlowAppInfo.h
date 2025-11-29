@class NSString, WAPageFlowSessionInfo, WAPageFlowObject;

@interface WAPageFlowAppInfo : MMObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned long long appState;
@property (nonatomic) unsigned long long useState;
@property (nonatomic) unsigned int serviceAppType;
@property (retain, nonatomic) WAPageFlowAppInfo *preAppInfo;
@property (retain, nonatomic) WAPageFlowSessionInfo *preSessionInfo;
@property (retain, nonatomic) WAPageFlowObject *preAppPageInfo;
@property (nonatomic) unsigned int preEntranceWebviewID;

- (void)updateWithUserName:(id)a0 appid:(id)a1 type:(unsigned int)a2 serviceAppType:(unsigned int)a3;
- (void).cxx_destruct;

@end
