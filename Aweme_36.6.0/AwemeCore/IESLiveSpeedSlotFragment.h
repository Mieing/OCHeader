@class IESLiveSpeedSlotStore;

@interface IESLiveSpeedSlotFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveSpeedSlotStore *store;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)loadSpeedGiftForce;
- (void)setNeedsLoadSpeedGift;
- (void).cxx_destruct;

@end
