@class BaseRequest, NSString;

@interface BizAiScanImageRetrievalRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *jsonStr;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
