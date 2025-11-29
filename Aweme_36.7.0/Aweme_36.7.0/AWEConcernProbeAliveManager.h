@class NSDate;

@interface AWEConcernProbeAliveManager : NSObject

@property (nonatomic) BOOL hasTrackForProbeAlive;
@property (nonatomic) BOOL hasLastView;
@property (nonatomic) BOOL hasProbeAlive;
@property (nonatomic) long long lastViewIndex;
@property (retain, nonatomic) NSDate *lastRefreshTime;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)refreshProbeAliveStatus;
- (void)refreshProbeAliveTime;
- (void)refreshLastViewInformationWithDataSource:(id)a0;
- (void)probeAliveIfNeedWithCurrentIndex:(long long)a0 completionBlock:(id /* block */)a1;
- (id)findDeleteIndexPathFromIndex:(long long)a0 inDataSource:(id)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
