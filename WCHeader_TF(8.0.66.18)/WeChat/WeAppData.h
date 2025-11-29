@class NSString, NSData;

@interface WeAppData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSData *dataBuffer;
@property (retain, nonatomic) NSString *path;

+ (void)initialize;

@end
