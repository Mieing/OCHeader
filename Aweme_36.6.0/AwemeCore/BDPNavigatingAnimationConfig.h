@interface BDPNavigatingAnimationConfig : NSObject

@property (nonatomic) BOOL useSimplePush;
@property (nonatomic) double pushDuration;
@property (nonatomic) double presentDuration;
@property (nonatomic) double delayCompleteAnimationDuration;

+ (id)sharedInstance;

- (id)performanceLevelString;
- (id)pushConfigKeyWithKey:(id)a0;
- (id)init;

@end
