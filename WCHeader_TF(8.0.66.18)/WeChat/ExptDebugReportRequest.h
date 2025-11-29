@class BaseRequest, NSString;

@interface ExptDebugReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int key;
@property (retain, nonatomic) NSString *content;

+ (void)initialize;

@end
