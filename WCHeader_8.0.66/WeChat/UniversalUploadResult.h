@class NSString;

@interface UniversalUploadResult : NSObject

@property (nonatomic) BOOL isSucc;
@property (nonatomic) int fileType;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *fileMd5;
@property (retain, nonatomic) NSString *imgInfo;
@property (nonatomic) int middleFileType;
@property (retain, nonatomic) NSString *middleFileId;
@property (retain, nonatomic) NSString *middleAesKey;
@property (retain, nonatomic) NSString *middleFileMd5;
@property (nonatomic) int thumbFileType;
@property (retain, nonatomic) NSString *thumbFileId;
@property (retain, nonatomic) NSString *thumbAesKey;
@property (retain, nonatomic) NSString *thumbFileMd5;

- (void).cxx_destruct;

@end
