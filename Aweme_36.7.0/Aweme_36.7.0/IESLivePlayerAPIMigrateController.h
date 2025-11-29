@interface IESLivePlayerAPIMigrateController : NSObject

@property (nonatomic) BOOL apiMigratePhase1Enable;

+ (id)sharedInstance;

- (id)init;
- (void)setup;

@end
