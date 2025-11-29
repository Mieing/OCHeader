@class NSString, PalmReportInfo, OnlineCollectCdnDataInfo;

@interface CheckOnlineOpenPalmServiceReqBody : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sid;
@property (retain, nonatomic) NSString *palmFileId;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *encryptPalmFileKey;
@property (retain, nonatomic) PalmReportInfo *reportInfo;
@property (nonatomic) int cdnDataFormat;
@property (retain, nonatomic) OnlineCollectCdnDataInfo *cdnDataInfo;

+ (void)initialize;

@end
