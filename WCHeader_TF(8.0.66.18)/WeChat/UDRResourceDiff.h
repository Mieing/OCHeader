@class NSString, EncryptionInfo;

@interface UDRResourceDiff : WXPBGeneratedMessage

@property (nonatomic) unsigned int baseVersion;
@property (nonatomic) unsigned int diffAlgo;
@property (nonatomic) unsigned int diffSize;
@property (retain, nonatomic) NSString *diffMd5;
@property (retain, nonatomic) NSString *diffUrl;
@property (retain, nonatomic) EncryptionInfo *diffEncryptionInfo;

+ (void)initialize;

@end
