@class NSString;

@interface HwDeviceMsg_HwImage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int size;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *tlEncrytKey;
@property (nonatomic) unsigned int cdnType;

+ (void)initialize;

@end
