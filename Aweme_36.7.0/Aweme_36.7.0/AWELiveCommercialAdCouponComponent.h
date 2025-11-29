@class HTSEventContext, NSObject, AWEAwemeModel;
@protocol IESLiveRoomService, AWECommerceLiveComponentsManager;

@interface AWELiveCommercialAdCouponComponent : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) id<IESLiveRoomService> roomInfo;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) NSObject<AWECommerceLiveComponentsManager> *componentsManager;

- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)resetAdCouponInfo;
- (void)configWithFragmentInfo:(id)a0 roomContext:(id)a1 componentsManager:(id)a2 componentModel:(id)a3;
- (void)tryReceivingAdCouponForAudience;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
