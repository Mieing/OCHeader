@interface HMDGWPASanManager : NSObject

@property (class, readonly, nonatomic, getter=isStarting) BOOL starting;
@property (class, readonly, nonatomic, getter=isStarted) BOOL started;

+ (BOOL)checkOptionValid:(id)a0;
+ (void)startWithOption:(id)a0;
+ (BOOL)_privateLiveKeeper;

@end
