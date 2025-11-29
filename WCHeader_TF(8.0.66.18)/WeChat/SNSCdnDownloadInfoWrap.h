@class NSString, NSArray, CdnTaskInfo;

@interface SNSCdnDownloadInfoWrap : NSObject

@property (nonatomic) int filetype;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSString *dataUrl;
@property (retain, nonatomic) NSString *savePath;
@property (retain, nonatomic) NSArray *arryIP;
@property (retain, nonatomic) NSString *referUrl;
@property (nonatomic) BOOL bUseDCIP;
@property (nonatomic) int downloadMode;
@property (nonatomic) unsigned int predownloadPercent;
@property (nonatomic) BOOL bUseXorEncrypt;
@property (nonatomic) unsigned long long xorEncryKey;
@property (retain, nonatomic) CdnTaskInfo *taskInfo;
@property (nonatomic) unsigned long long m_ui64TaskCreateTime;
@property (copy, nonatomic) NSString *videoColdRule;

- (void).cxx_destruct;

@end
