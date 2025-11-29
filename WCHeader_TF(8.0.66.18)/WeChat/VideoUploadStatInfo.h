@class NSString, VideoParamsSource, VideoParamsInfo;

@interface VideoUploadStatInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *videoNewMd5;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSString *snsCommitId;
@property (nonatomic) unsigned int uploadStartTime;
@property (retain, nonatomic) VideoParamsSource *oriVideoParamsSource;
@property (retain, nonatomic) VideoParamsSource *cpVideoParamsSource;
@property (nonatomic) unsigned int cpStatus;
@property (nonatomic) unsigned int sendScene;
@property (retain, nonatomic) NSString *cdnIp;
@property (retain, nonatomic) NSString *snsUrl;
@property (nonatomic) BOOL sourceVideoContainsWXTag;
@property (retain, nonatomic) VideoParamsInfo *srcVideoParams;
@property (retain, nonatomic) VideoParamsInfo *cpVideoParams;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)mergeInfoFromUploadTaskInfo:(id)a0;
- (void)mergeInfoFromTaskInfo:(id)a0;
- (void)mergeInfoFromSnsTaskInfo:(id)a0;
- (unsigned int)getUploadSpeed:(unsigned int)a0;
- (id)getBigVideoStatInfo;
- (void)reportKV;
- (void).cxx_destruct;

@end
