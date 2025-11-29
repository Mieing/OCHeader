@class IESLiveUserCardStore;

@interface IESLiveUserCardConfig : NSObject

@property (nonatomic) long long targetRole;
@property (nonatomic) long long myRole;
@property (weak, nonatomic) IESLiveUserCardStore *store;

- (id)userCardConfig;
- (id)getCurrentScene;
- (id)getUserCardConfig;
- (id)audienceViewOtherAnchorConfig;
- (id)audienceViewAudienceConfig;
- (id)adminViewAudienceConfig;
- (id)anchorViewAudienceConfig;
- (id)initWithMyRole:(long long)a0 toRole:(long long)a1;
- (id)getCurrentRequestPage:(BOOL)a0;
- (void).cxx_destruct;

@end
