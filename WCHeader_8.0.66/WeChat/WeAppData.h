@class NSString, NSData;

@interface WeAppData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSData *dataBuffer;
@property (retain, nonatomic) NSString *path;

+ (void)initialize;

- (void)setPath:(id)a0;
- (id)path;
- (void)setDataBuffer:(id)a0;
- (id)dataBuffer;
- (void)setVersionType:(unsigned int)a0;
- (unsigned int)versionType;
- (void)setAppid:(id)a0;
- (id)appid;

@end
