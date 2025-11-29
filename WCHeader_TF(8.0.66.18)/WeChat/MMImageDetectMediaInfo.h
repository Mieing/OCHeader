@class NSString;

@interface MMImageDetectMediaInfo : MMObject

@property (retain, nonatomic) NSString *clientMsgID;
@property (retain, nonatomic) NSString *snsFileUrl;
@property (retain, nonatomic) NSString *snsToken;
@property (nonatomic) unsigned int encodeIdx;
@property (nonatomic) unsigned long long encodeKey;
@property (nonatomic) BOOL mayUseCDNCache;
@property (nonatomic) BOOL isReuploadFileOK;
@property (nonatomic) BOOL isCdnCacheExpired;
@property (retain, nonatomic) NSString *forwardFileID;
@property (retain, nonatomic) NSString *forwardAesKey;
@property (retain, nonatomic) NSString *reuplodFileID;
@property (retain, nonatomic) NSString *reuploadAaesKey;
@property (retain, nonatomic) NSString *hdFilePath;
@property (retain, nonatomic) NSString *middleFilePath;
@property (retain, nonatomic) NSString *reuploadFilePath;

- (id)generateChatImageInfoList;
- (id)generateSnsImageInfoList;
- (id)generateFileImageInfoList;
- (void).cxx_destruct;

@end
