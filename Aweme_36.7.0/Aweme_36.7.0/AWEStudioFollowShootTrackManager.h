@interface AWEStudioFollowShootTrackManager : NSObject

@property (nonatomic) long long entranceType;

+ (id)sharedInstance;

- (void)resetFollowShootEntranceType;
- (id)trackParamsForCollectEntrancePublish;
- (id)createAwemeParamsForCollectEntrancePublish;
- (void)setFollowShootEntranceType:(long long)a0;
- (id)trackParamsForCollectEntranceShoot;
- (id)init;

@end
