@interface QoSAdjusterUtil : NSObject

@property (nonatomic) long long originalRequestPriority;
@property (nonatomic) long long originalResponsePriority;
@property (nonatomic) long long targetRequestPriority;
@property (nonatomic) long long targetResponsePriority;
@property (nonatomic) BOOL isAdjusted;

+ (void)parseTNCQoSAdjusterConfig:(id)a0;
+ (id)shareInstance;

- (void)adjustQoSIfNeededInternal:(id)a0 forRequestThread:(BOOL)a1;
- (void)recoverThreadQoSIfNeededInternal:(long long)a0;
- (void)adjustRequestThreadQoSIfNeeded:(id)a0;
- (void)adjustResponseThreadQoSIfNeeded:(id)a0;
- (void)recoverRequestThreadQoSIfNeeded;
- (void)recoverResponseThreadQoSIfNeeded;
- (id)init;

@end
