@class NSString, BDPThreadSafeDictionary;

@interface BDPCloudSidManager : NSObject <BDPWarmBootMessage>

@property (retain, nonatomic) BDPThreadSafeDictionary *sidDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (id)sidWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
