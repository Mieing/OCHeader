@class NSString, WxaMigrateInfo;

@interface LaunchAction : WXPBGeneratedMessage

@property (nonatomic) unsigned int actionCode;
@property (retain, nonatomic) NSString *openUrl;
@property (nonatomic) BOOL needHistoryList;
@property (retain, nonatomic) NSString *alertMsg;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) WxaMigrateInfo *migrateInfo;
@property (retain, nonatomic) NSString *retryPageShowMsg;

+ (void)initialize;

@end
