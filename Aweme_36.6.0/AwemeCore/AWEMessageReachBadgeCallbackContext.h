@protocol AWEHPChannelBadgeModelProtocol;

@interface AWEMessageReachBadgeCallbackContext : AWEMessageReachComponentCallbackContext

@property (nonatomic) long long result;
@property (nonatomic) long long hideType;
@property (nonatomic) long long hideScene;
@property (nonatomic) long long downgradedType;
@property (retain, nonatomic) id<AWEHPChannelBadgeModelProtocol> badgeModel;
@property (nonatomic) BOOL fromUndertake;

- (void).cxx_destruct;

@end
