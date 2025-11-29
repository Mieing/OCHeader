@interface QoSAdjusterResult : NSObject

@property (nonatomic) BOOL isMatching;
@property (nonatomic) unsigned int adjustedQos;
@property (nonatomic) int relativePriority;
@property (nonatomic) long long targetPriority;

- (id)init;

@end
