@class NSString, WeAppNotifyMsg_ShowInfo;

@interface WeAppNotifyMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned int tipsId;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) WeAppNotifyMsg_ShowInfo *showInfo;
@property (retain, nonatomic) NSString *extInfo;

+ (void)initialize;

@end
