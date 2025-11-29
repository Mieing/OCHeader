@class NSString;

@interface CdnInchoateUploadInfo : NSObject

@property (nonatomic) int filetype;
@property (retain, nonatomic) NSString *clientMsgID;
@property (retain, nonatomic) NSString *fileID;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *fileMD5;
@property (retain, nonatomic) NSString *middleFileMD5;
@property (retain, nonatomic) NSString *thumbFileMD5;
@property (retain, nonatomic) NSString *videoNewMD5;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long middleFileSize;
@property (nonatomic) unsigned long long thumbFileSize;
@property (nonatomic) unsigned int crc32;

- (void).cxx_destruct;

@end
