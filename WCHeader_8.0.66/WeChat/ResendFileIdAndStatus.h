@class NSString;

@interface ResendFileIdAndStatus : NSObject <PBCoding>

@property (retain, nonatomic) NSString *fileId;
@property (nonatomic) unsigned int fileStatus;
@property (retain, nonatomic) NSString *localDataId;
@property (nonatomic) unsigned int isThumb;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) int dataType;
@property (retain, nonatomic) NSString *dataFmt;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) NSString *fileUrl;
@property (retain, nonatomic) NSString *fileAesKey;
@property (retain, nonatomic) NSString *streamId;
@property (retain, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_fileId;
+ (void)PBArrayAdd_fileStatus;
+ (void)PBArrayAdd_localDataId;
+ (void)PBArrayAdd_isThumb;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_dataType;
+ (void)PBArrayAdd_dataFmt;
+ (void)PBArrayAdd_clientMsgId;
+ (void)PBArrayAdd_fileUrl;
+ (void)PBArrayAdd_fileAesKey;
+ (void)PBArrayAdd_streamId;
+ (void)PBArrayAdd_filePath;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
