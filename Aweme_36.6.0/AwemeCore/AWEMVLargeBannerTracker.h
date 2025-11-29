@class NSMutableArray;

@interface AWEMVLargeBannerTracker : NSObject

@property (retain, nonatomic) NSMutableArray *bannerShowIds;

- (void)trackForMediumVideoClientClickBannerWithModel:(id)a0 clickIndex:(long long)a1;
- (void)trackForMediumVideoClientBannerSwitchWithActionType:(id)a0 direction:(id)a1;
- (void)trackForMediumVideoClientShowBannerWithModel:(id)a0 showIndex:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
