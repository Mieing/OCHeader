@class NSString, NSMutableArray;

@interface PreviewDocumentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) int status;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) int limitedBy;
@property (nonatomic) int type;
@property (nonatomic) unsigned int imgWidth;
@property (nonatomic) unsigned int imgHeight;
@property (retain, nonatomic) NSMutableArray *pages;
@property (retain, nonatomic) NSMutableArray *sheets;
@property (nonatomic) unsigned int retryInterval;
@property (nonatomic) unsigned int maxRetryTimes;
@property (retain, nonatomic) NSString *version;

+ (void)initialize;

@end
