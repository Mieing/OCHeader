@class BaseRequest, NSString;

@interface BizAiScanImageScenePreviewRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) long long phashValue;
@property (retain, nonatomic) NSString *phashStr;
@property (retain, nonatomic) NSString *phashVersion;
@property (nonatomic) unsigned long long sessionid64;
@property (nonatomic) unsigned int seqNum;
@property (retain, nonatomic) NSString *fileId;

+ (void)initialize;

@end
