@class BaseRequest, BizAiScanImageLocation, BizAiScanImageAdInfo, NSMutableArray, BizAiScanImageJsapiInfo;

@interface ScanV2UploadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned long long sendSvrTime;
@property (nonatomic) unsigned int scanType;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) BizAiScanImageLocation *location;
@property (retain, nonatomic) BizAiScanImageAdInfo *adInfo;
@property (retain, nonatomic) BizAiScanImageJsapiInfo *jsapiInfo;

+ (void)initialize;

@end
