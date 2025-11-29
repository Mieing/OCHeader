@class BaseRequest, NSMutableArray, NSString;

@interface SendRingBackToListenRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long cliMinSeq;
@property (nonatomic) unsigned long long totalScanRingBackCount;
@property (nonatomic) unsigned long long totalSendRingBackCount;
@property (retain, nonatomic) NSMutableArray *disableSimpleRingBacks;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
