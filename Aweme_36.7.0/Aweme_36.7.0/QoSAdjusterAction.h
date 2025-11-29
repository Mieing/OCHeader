@class HostPathMatchConfig;

@interface QoSAdjusterAction : NSObject

@property (nonatomic) long long actionPriority;
@property (retain, nonatomic) HostPathMatchConfig *matchConfig;
@property (nonatomic) long long adjustedPriority;

- (id)initWithActPriority:(long long)a0 matchConfig:(id)a1;
- (id)takeAction:(id)a0;
- (id)parseQoSActionFromDict:(id)a0;
- (id)calculateQoSAndRelativePriority;
- (long long)getRequestPriority;
- (void).cxx_destruct;
- (id)init;

@end
