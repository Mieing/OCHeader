@class NSString, HwClientEncryptFileInfo;

@interface MMIotHwAppFile : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int size;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int cdnType;
@property (nonatomic) unsigned int fileEncryptMode;
@property (retain, nonatomic) HwClientEncryptFileInfo *clientEncryptFileInfo;

+ (void)initialize;

@end
