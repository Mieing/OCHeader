@class NSDictionary, BDLiveCommerceFragment;

@interface AWEBDALiveFragment : IESLiveRoomComponent

@property (retain, nonatomic) BDLiveCommerceFragment *targetFragment;
@property (retain, nonatomic) NSDictionary *businessParams;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (void).cxx_destruct;

@end
