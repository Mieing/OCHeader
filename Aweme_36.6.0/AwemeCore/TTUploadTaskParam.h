@class NSString, NSDictionary, NSArray, NSData;

@interface TTUploadTaskParam : NSObject

@property (copy) NSString *key;
@property (copy) NSString *uploadUrl;
@property (copy) NSString *fileFullPath;
@property (retain) NSDictionary *userHeaders;
@property (copy) NSString *md5;
@property long long fileTotalLength;
@property unsigned long long crc32;
@property (copy) NSArray *backupUrlArray;
@property BOOL isBackgroundUploadDisable;
@property unsigned char sendDataRetryTimes;
@property long long bgUploadSliceLength;
@property unsigned char sliceCountMax;
@property long long dynamicSliceInitStepLength;
@property long long netLibType;
@property (nonatomic) long long queueType;
@property (nonatomic) long long insertType;
@property (copy, nonatomic) NSString *backgroundBOEDomain;
@property (nonatomic) long long spaceId;
@property (nonatomic) int materialType;
@property (copy, nonatomic) NSString *fileType;
@property (retain, nonatomic) NSData *uploadData;
@property (copy, nonatomic) id /* block */ updateTokenBlock;
@property (copy, nonatomic) NSString *tokenKey;
@property (nonatomic) long long protocolType;
@property (retain, nonatomic) NSDictionary *completedMsgDic;
@property (copy, nonatomic) NSString *completedMsgUrl;
@property (nonatomic) BOOL isCompletedMsgCommonParamEnable;
@property (nonatomic) BOOL isSkipCompletedMsg;

- (id)initWithUrlAndFile:(id)a0 fileFullPath:(id)a1 headers:(id)a2;
- (id)getCopyHeaders;
- (void)updateNewToken:(id)a0;
- (id)makeKey:(id)a0 fileFullPath:(id)a1 headers:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
