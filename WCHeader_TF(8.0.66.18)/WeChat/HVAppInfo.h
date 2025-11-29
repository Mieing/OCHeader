@class NSString, LabelInfo;

@interface HVAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *launchUrl;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appIcon;
@property (retain, nonatomic) LabelInfo *labelInfo;
@property (retain, nonatomic) NSString *jumpUrl;

+ (void)initialize;

@end
