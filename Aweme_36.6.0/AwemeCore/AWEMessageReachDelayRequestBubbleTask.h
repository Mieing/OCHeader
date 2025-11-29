@class NSString, AWEMessageReachParamContext;

@interface AWEMessageReachDelayRequestBubbleTask : NSObject

@property (retain, nonatomic) NSString *originSource;
@property (nonatomic) unsigned long long delayReason;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) long long addTime;
@property (retain, nonatomic) AWEMessageReachParamContext *paramContext;

- (void).cxx_destruct;
- (id)description;

@end
