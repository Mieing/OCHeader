@class NSString, IESLiveUserCardStore;

@interface IESLiveUserCardComponentsConfigIMP : NSObject <IESLiveUserCardComponentsConfigProtocol>

@property (weak, nonatomic) IESLiveUserCardStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)audienceViewOtherAnchorConfig;
- (id)audienceViewAudienceConfig;
- (id)adminViewAudienceConfig;
- (id)anchorViewAudienceConfig;
- (id)userCardComponentsConfig;
- (void).cxx_destruct;

@end
