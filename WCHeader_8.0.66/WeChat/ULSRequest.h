@class NSString, NSData;

@interface ULSRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int cliVer;
@property (nonatomic) unsigned int certVer;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSData *encryptBuff;
@property (nonatomic) unsigned int unused1;
@property (nonatomic) unsigned int unused2;

+ (void)initialize;

@end
