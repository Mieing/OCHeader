@class NSString;

@interface PublicLibUpdateInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL needUpdate;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int forceUpdate;
@property (retain, nonatomic) NSString *patchUrl;
@property (nonatomic) BOOL relyUpdate;

+ (void)initialize;

@end
