@class HostPathMatchConfig;

@interface MainQueueJumperAction : NSObject

@property (nonatomic) long long actionPriority;
@property (retain, nonatomic) HostPathMatchConfig *matchConfig;

- (id)initWithActPriority:(long long)a0 matchConfig:(id)a1;
- (id)parseJumperActionFromDict:(id)a0;
- (BOOL)takeAction:(id)a0;
- (void).cxx_destruct;

@end
