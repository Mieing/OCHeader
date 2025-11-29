@class AWEMRDelayRequestBubbleMsg, NSString, NSDictionary, NSArray, AWEMessageReachBussinessParamsModel;

@interface AWEMessageReachRequestParamModel : NSObject

@property (copy, nonatomic) NSString *requestIdentifier;
@property (nonatomic) BOOL fromChannelDelay;
@property (nonatomic) long long requestCacheTime;
@property (copy, nonatomic) NSDictionary *reqParam;
@property (copy, nonatomic) NSDictionary *triggerExtra;
@property (copy, nonatomic) NSArray *scenes;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) double eventVersion;
@property (copy, nonatomic) id /* block */ triggerCompletion;
@property (copy, nonatomic) NSDictionary *channelParamsDict;
@property (nonatomic) BOOL isFromRetry;
@property (retain, nonatomic) AWEMRDelayRequestBubbleMsg *delayRequestBubbleMsg;
@property (copy, nonatomic) NSDictionary *passThroughReqParam;
@property (retain, nonatomic) AWEMessageReachBussinessParamsModel *bussinessParamsModel;

- (void).cxx_destruct;

@end
