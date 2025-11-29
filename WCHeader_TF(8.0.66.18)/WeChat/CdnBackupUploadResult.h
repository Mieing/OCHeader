@class NSString, NSMutableArray;

@interface CdnBackupUploadResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSMutableArray *files;

+ (void)initialize;

@end
