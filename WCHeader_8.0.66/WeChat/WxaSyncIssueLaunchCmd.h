@class NSString, WxaSyncBaseCmd, NSMutableArray;

@interface WxaSyncIssueLaunchCmd : WXPBGeneratedMessage

@property (retain, nonatomic) WxaSyncBaseCmd *base;
@property (retain, nonatomic) NSString *launch;
@property (retain, nonatomic) NSMutableArray *sceneList;
@property (nonatomic) unsigned int useBeginTime;
@property (nonatomic) unsigned int useEndTime;

+ (void)initialize;

@end
