@class NSString, NSArray, NSDictionary;

@interface TPDownloadParamData : NSObject

@property (nonatomic) long long dlType;
@property (copy, nonatomic) NSString *downloadFileID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *backUrl;
@property (nonatomic) long long taskType;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSArray *urlCdnIDList;
@property (copy, nonatomic) NSArray *urlCdnIDHttpHeaderList;
@property (nonatomic) long long urlExpireTime;
@property (nonatomic) long long fileSize;
@property (nonatomic) long long fileDuration;
@property (copy, nonatomic) NSString *playDefinition;
@property (copy, nonatomic) NSString *currentFormat;
@property (nonatomic) long long currentFormatID;
@property (copy, nonatomic) NSDictionary *formatInfo;
@property (nonatomic) BOOL isCharge;
@property (nonatomic) BOOL needEncryptCache;
@property (nonatomic) long long starTimeMS;
@property (nonatomic) long long endTimeMS;
@property (nonatomic) long long clipCount;
@property (nonatomic) long long clipNo;
@property (copy, nonatomic) NSString *fileMD5;
@property (copy, nonatomic) NSString *base;
@property (copy, nonatomic) NSString *linkVid;
@property (copy, nonatomic) NSString *m3u8;
@property (nonatomic) long long tm;
@property (nonatomic) long long fp2p;
@property (copy, nonatomic) NSString *testId;
@property (copy, nonatomic) NSString *flowId;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long preloadDuration;
@property (copy, nonatomic) NSString *savePath;
@property (nonatomic) BOOL isOffline;
@property (nonatomic) long long exceptDelayMs;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *deckey;
@property (copy, nonatomic) NSString *random;
@property (copy, nonatomic) NSArray *defInfoList;
@property (copy, nonatomic) NSArray *secondaryM3u8List;
@property (nonatomic) long long bandwidthLevel;
@property (nonatomic) BOOL disableExpandDownloadUrl;
@property (copy, nonatomic) NSDictionary *extInfoMap;
@property (copy, nonatomic) NSString *sceneId;
@property (copy, nonatomic) NSString *pcdnChargeId;
@property (nonatomic) BOOL isCacheCopyFirst;
@property (nonatomic) BOOL isNeedFlowControl;
@property (nonatomic) long long preloadHttpStartTimeMs;

- (id)initWithDownloadFileID:(id)a0;
- (id)initWithDownloadFileID:(id)a0 downloadType:(long long)a1;
- (void).cxx_destruct;

@end
