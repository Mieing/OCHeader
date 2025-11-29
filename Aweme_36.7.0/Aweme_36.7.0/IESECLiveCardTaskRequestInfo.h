@class NSString, NSDictionary;

@interface IESECLiveCardTaskRequestInfo : NSObject

@property (nonatomic) BOOL onEnter;
@property (copy, nonatomic) NSString *baseURL;
@property (copy, nonatomic) NSString *requestPath;
@property (retain, nonatomic) NSDictionary *passthroughRequestParams;
@property (nonatomic) double retryRequestDelayTime;
@property (retain, nonatomic) NSString *messageProductInfo;

- (void).cxx_destruct;

@end
