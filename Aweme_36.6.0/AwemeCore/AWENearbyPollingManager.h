@class NSMutableDictionary;

@interface AWENearbyPollingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskDict;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)startPollingWithIdentifier:(id)a0 interval:(double)a1 apiPath:(id)a2 reqParams:(id)a3 pollingLimit:(long long)a4;
- (void)cancelPollingWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
