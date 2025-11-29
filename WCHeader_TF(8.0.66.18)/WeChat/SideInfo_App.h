@class NSString;

@interface SideInfo_App : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int openCount;

+ (void)initialize;

@end
