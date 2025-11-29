@class NSString, RTVPipelineEvent;

@interface RTVPipelineEventStatus : NSObject

@property (nonatomic) long long status;
@property (nonatomic) double eventChangedTime;
@property (nonatomic) double initTime;
@property (nonatomic) double pipelineTime;
@property (retain, nonatomic) NSString *cost;
@property (weak, nonatomic) RTVPipelineEvent *event;

- (void)willDoEventInPipeline:(id)a0;
- (id)statusString:(long long)a0;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
