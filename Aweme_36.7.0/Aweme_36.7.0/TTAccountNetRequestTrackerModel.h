@class NSString;

@interface TTAccountNetRequestTrackerModel : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long apiStartTime;
@property (nonatomic) BOOL triggerBDTuring;
@property (nonatomic) long long ttnetRequestTime;
@property (nonatomic) long long ttnetCallbackTime;
@property (nonatomic) BOOL triggerErrorHandler;

+ (BOOL)pathNeedTrack:(id)a0;
+ (id)generateTrackerModelWithPath:(id)a0 netParams:(id *)a1;
+ (id)trackerModelFromNetParams:(id *)a0;
+ (void)trackFilterDuration:(id)a0 filterType:(long long)a1 duration:(long long)a2;
+ (void)trackFilterDuration:(id)a0 filterType:(long long)a1 duration:(long long)a2 logID:(id)a3;

- (id)sgmRetryAddModelToNetParams:(id)a0;
- (void)trackAccountApiCallback:(long long)a0 logID:(id)a1 error:(id)a2 jsonObj:(id)a3;
- (void).cxx_destruct;

@end
