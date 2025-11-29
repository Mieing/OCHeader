@class NSString;

@interface WAReportTemplateSessionActionItem : WAReportBaseItem

@property (nonatomic) unsigned int EventID;
@property (retain, nonatomic) NSString *templateSessionUserName;
@property (nonatomic) unsigned int TimeSecond;
@property (retain, nonatomic) NSString *AccountCount;
@property (retain, nonatomic) NSString *TemplateID;
@property (nonatomic) unsigned int TargetPageType;
@property (nonatomic) unsigned int MenuOperateType;
@property (nonatomic) unsigned int GlobalNotifySwitch;
@property (nonatomic) unsigned int contactType;
@property (retain, nonatomic) NSString *serviceNoticeSessionId;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
