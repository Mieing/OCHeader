@class NSString, NSMutableArray;

@interface CdnBackupUpload : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *files;
@property (retain, nonatomic) NSString *aeskey;

+ (void)initialize;

@end
