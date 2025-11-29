@class BaseRequest, NSData;

@interface FinderConsumePrefetchReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int displayTabType;
@property (retain, nonatomic) NSData *streamLastBuffer;

+ (void)initialize;

@end
