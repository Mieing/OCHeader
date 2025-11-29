@class NSString;

@interface MMListenJumpAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *minVersion;
@property (nonatomic) unsigned int isTransparent;

+ (void)initialize;

@end
