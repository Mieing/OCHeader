@class NSDictionary;

@interface MMTransferCallbackExtContext : NSObject

@property (nonatomic) BOOL isReqWaitingH5auth;
@property (nonatomic) BOOL isReqRetry;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;

@end
