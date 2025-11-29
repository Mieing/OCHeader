@class NSString, AWELiveAudienceAccessServiceConfig, IESECLiveRoomModel;
@protocol AWELiveAudienceAccessService, IESECAudienceAccessServiceSubscriber;

@interface AWEECLiveAudienceAccessServiceImpl : NSObject <IESECLiveAudienceAccessService, AWEECLiveAudienceAccessServiceConfigurable>

@property (retain, nonatomic) IESECLiveRoomModel *roomModel;
@property (weak, nonatomic) id<IESECAudienceAccessServiceSubscriber> subscriber;
@property (retain, nonatomic) id<AWELiveAudienceAccessService> accessService;
@property (retain, nonatomic) AWELiveAudienceAccessServiceConfig *serviceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mute:(BOOL)a0;
- (void)bindLiveWithView:(id)a0 viewController:(id)a1;
- (void)enterLive;
- (void)exitLive;
- (void)prePullStream;
- (id)initWithRoomModel:(id)a0 subscriber:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)setup;

@end
