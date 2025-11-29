@class NSString;

@interface CheckExternalMiniProgramActionBuffer : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int versionType;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSString *refererAppid;

+ (void)initialize;

@end
