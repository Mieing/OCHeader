@class NSString;

@interface MMListenLocalFileInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *fileExt;
@property (retain, nonatomic) NSString *fileMd5;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *thumbPath;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) long long chatLocalId;
@property (nonatomic) long long chatSvrId;
@property (nonatomic) long long favLocalId;
@property (nonatomic) long long favSvrId;

+ (void)initialize;

- (id)fullFilePath;
- (void)setFullFilePath:(id)a0;
- (BOOL)canShowHandOffOpenInPCItem;

@end
