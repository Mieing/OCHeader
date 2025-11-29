@class NSLock, NSMutableDictionary;

@interface IESGurdCleanerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cleanerDictionary;
@property (retain, nonatomic) NSLock *cleanerLock;
@property (retain, nonatomic) NSMutableDictionary *channelsWhitelist;

+ (id)sharedManager;

- (void)cleanCacheIfNeeded;
- (void)registerCleanerForAccessKey:(id)a0 configuration:(id)a1;
- (void)addChannelsWhitelist:(id)a0 forAccessKey:(id)a1;
- (void).cxx_destruct;

@end
