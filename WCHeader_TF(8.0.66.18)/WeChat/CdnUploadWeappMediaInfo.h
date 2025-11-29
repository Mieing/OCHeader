@class NSString, NSData;

@interface CdnUploadWeappMediaInfo : NSObject

@property (nonatomic) int fileType;
@property (nonatomic) int appType;
@property (retain, nonatomic) NSString *fileKey;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *thumbFilePath;
@property (retain, nonatomic) NSData *fileData;
@property (retain, nonatomic) NSData *thumbFileData;
@property (nonatomic) BOOL isStorageMode;
@property (nonatomic) int snsUploadVersion;

- (void).cxx_destruct;

@end
