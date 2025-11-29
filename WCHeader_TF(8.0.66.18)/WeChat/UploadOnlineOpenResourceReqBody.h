@class NSString, PalmReportInfo, OnlineCollectCdnDataInfo;

@interface UploadOnlineOpenResourceReqBody : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *palmFileId;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *encryptPalmFileKey;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) PalmReportInfo *reportInfo;
@property (nonatomic) int cdnDataFormat;
@property (retain, nonatomic) OnlineCollectCdnDataInfo *cdnDataInfo;

+ (void)initialize;

@end
