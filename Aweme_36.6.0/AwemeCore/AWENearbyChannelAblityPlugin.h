@protocol AWENearbyChannelAbilityProtocol, AWENearbyTabForwardAblityProtocol, AWENearbyBubbleAblityProtocol, AWENearbyTabDotAblityProtocol, AWENearbyChannelContextAblityProtocol;

@interface AWENearbyChannelAblityPlugin : NSObject

@property (weak, nonatomic) id<AWENearbyChannelContextAblityProtocol> nearbyChannelContextAblityImp;
@property (weak, nonatomic) id<AWENearbyTabDotAblityProtocol> nearbyChannelTabDotAblityImp;
@property (weak, nonatomic) id<AWENearbyBubbleAblityProtocol> nearbyChannelBubbleAblityImp;
@property (weak, nonatomic) id<AWENearbyChannelContextAblityProtocol> grouponChannelContextAblityImp;
@property (weak, nonatomic) id<AWENearbyTabDotAblityProtocol> grouponChannelTabDotAblityImp;
@property (weak, nonatomic) id<AWENearbyBubbleAblityProtocol> grouponChannelBubbleAblityImp;
@property (weak, nonatomic) id<AWENearbyTabForwardAblityProtocol> grouponChannelTabForwardAblityImp;
@property (weak, nonatomic) id<AWENearbyChannelAbilityProtocol> nearbyChannelAbility;
@property (weak, nonatomic) id<AWENearbyChannelAbilityProtocol> grouponChannelAbility;

+ (id)channelAbilityWithPageType:(long long)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
