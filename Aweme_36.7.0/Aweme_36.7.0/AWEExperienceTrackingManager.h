@interface AWEExperienceTrackingManager : NSObject

@property (nonatomic) long long indexOfRetrieve;

+ (id)videoPlayAspect;
+ (id)playTimeAspect;
+ (id)aspectWithEventName:(id)a0;
+ (id)sharedInstance;

- (id)paramsForVideoPlayWithContext:(id)a0;
- (id)paramsForPlayTimeWithContext:(id)a0;
- (void)setIndexOfRetrieveWithNotification:(id)a0;
- (void)addVVLevelToPlayApplogWithModel:(id)a0 params:(id)a1;
- (id)init;
- (void)dealloc;

@end
