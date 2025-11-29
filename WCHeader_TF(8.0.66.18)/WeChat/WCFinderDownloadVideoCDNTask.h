@class NSString, NSArray, NSData, WCFinderFeedMediaWrap;

@interface WCFinderDownloadVideoCDNTask : NSObject

@property (nonatomic) unsigned int taskId;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaItem;
@property (nonatomic) int downloadMode;
@property (nonatomic) BOOL bSourceChanged;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *tmpPath;
@property (retain, nonatomic) NSString *formatPath;
@property (nonatomic) BOOL bChatRoomPreload;
@property (nonatomic) BOOL bPreloadTask;
@property (nonatomic) BOOL bPreloadFinish;
@property (nonatomic) unsigned int preloadPercent;
@property (nonatomic) unsigned int totalLength;
@property (nonatomic) unsigned int finishedLegth;
@property (nonatomic) int filetype;
@property (nonatomic) int apptype;
@property (nonatomic) BOOL bReceiveMoov;
@property (nonatomic) BOOL bReceivePreData;
@property (nonatomic) BOOL preloadTaskDownloadTotalFile;
@property (nonatomic) BOOL needPreloadFirstFrame;
@property (nonatomic) BOOL hasPreloadFirstFrame;
@property (nonatomic) BOOL isLowPriorityTask;
@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *dataUrl;
@property (retain, nonatomic) NSString *realDownLoadURL;
@property (nonatomic) unsigned long long ui64StartTime;
@property (nonatomic) double getMoovTime;
@property (nonatomic) unsigned long long enQueueTime;
@property (nonatomic) unsigned long long preloadMinSize;
@property (nonatomic) unsigned long long firstFrameSize;
@property (copy, nonatomic) NSString *decodeKey;
@property (copy, nonatomic) NSString *videoDownloadFlag;
@property (nonatomic) BOOL useMulitBitRate;
@property (nonatomic) BOOL isHLS;
@property (nonatomic) BOOL hotFlag;
@property (nonatomic) BOOL isBackendPreloadTask;
@property (nonatomic) BOOL bUseDCIP;
@property (retain, nonatomic) NSArray *arryIP;
@property (retain, nonatomic) NSString *printClientID;
@property (copy, nonatomic) NSString *encryptKey;
@property (copy, nonatomic) NSString *encryptIV;
@property (readonly, nonatomic) NSData *finderCtrlInfo;

- (id)getHost;
- (id)getDNSKey;
- (id)description;
- (id)valueForKey:(id)a0;
- (void).cxx_destruct;

@end
