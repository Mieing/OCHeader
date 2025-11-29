@class NSString;

@interface WeAppNotifyMsg_ShowInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconUrl;

+ (void)initialize;

@end
