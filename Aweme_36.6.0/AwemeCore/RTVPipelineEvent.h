@class RTVPipelineEventStatus;

@interface RTVPipelineEvent : NSObject

@property (retain, nonatomic) RTVPipelineEventStatus *eventStatus;
@property (nonatomic) long long eventType;
@property (nonatomic) long long domain;

+ (id)eventWithType:(long long)a0;

- (id)eventIdentify;
- (id)eventString;
- (void)willDoEventInPipeline:(id)a0;
- (id)domainString;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
