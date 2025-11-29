@class NSString, NSData;

@interface BizPersonalCenterCellList_WeappInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int sence;
@property (nonatomic) unsigned int openType;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSData *extraData;
@property (nonatomic) unsigned int appVersion;

+ (void)initialize;

@end
