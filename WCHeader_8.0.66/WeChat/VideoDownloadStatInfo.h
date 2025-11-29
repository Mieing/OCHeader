@class NSString, VideoParamsInfo;

@interface VideoDownloadStatInfo : NSObject

@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *sessionName;
@property (nonatomic) unsigned int sessionMember;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *videoNewMd5;
@property (nonatomic) unsigned int downloadStartTime;
@property (retain, nonatomic) VideoParamsInfo *videoParams;
@property (retain, nonatomic) NSString *cdnIp;
@property (retain, nonatomic) NSString *snsUrl;
@property (nonatomic) unsigned int preloadSize;
@property (nonatomic) unsigned int preloadStatus;
@property (retain, nonatomic) NSString *snsId;

- (id)init;
- (void)mergeInfoFromDownloadTaskInfo:(id)a0;
- (void)mergeInfoFromTaskInfo:(id)a0;
- (id)getBigVideoStatInfo;
- (void)reportKV;
- (void).cxx_destruct;

@end
