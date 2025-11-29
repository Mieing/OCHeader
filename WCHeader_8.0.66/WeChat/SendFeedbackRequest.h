@class BaseRequest, NSString;

@interface SendFeedbackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *machineType;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int reportType;

+ (void)initialize;

@end
