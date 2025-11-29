@class NSString;

@interface ParallelUploadRequest_Param : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int fileType;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *fileMd5;
@property (nonatomic) unsigned int partSize;
@property (retain, nonatomic) NSString *thumbFileId;
@property (retain, nonatomic) NSString *thumbAesKey;
@property (retain, nonatomic) NSString *lastUploadId;
@property (retain, nonatomic) NSString *midFileId;
@property (retain, nonatomic) NSString *midAesKey;
@property (nonatomic) unsigned int midImgType;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *bigFileAesKey;
@property (retain, nonatomic) NSString *customRequestHeader;
@property (nonatomic) unsigned int needThumbGeneratedBySvr;
@property (nonatomic) unsigned int islive;
@property (retain, nonatomic) NSString *liveImgFileId;
@property (nonatomic) unsigned int liveType;

+ (void)initialize;

@end
