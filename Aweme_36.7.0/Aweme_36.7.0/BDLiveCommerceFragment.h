@class NSArray, BDADPreviewToRoomModel, NSDictionary;

@interface BDLiveCommerceFragment : NSObject

@property (copy, nonatomic) NSArray *plugins;
@property (retain, nonatomic) BDADPreviewToRoomModel *modelToLiveRoom;
@property (retain, nonatomic) NSDictionary *extra;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (void)componentBindService:(id)a0;
- (id)getPluginWithClass:(Class)a0;
- (void)pluginPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)liveMediator;
- (void).cxx_destruct;

@end
