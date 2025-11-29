@class NSString;

@interface LensPackage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned int fileSize;

+ (void)initialize;

@end
