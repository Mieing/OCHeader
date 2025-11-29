@class BaseRequest, NSMutableArray, BizAiScanImageLocation;

@interface ScanV2RetrievalLiteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reqKeys;
@property (nonatomic) BOOL isClick;
@property (retain, nonatomic) BizAiScanImageLocation *location;

+ (void)initialize;

@end
