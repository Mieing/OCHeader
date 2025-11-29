@class IESECLiveApi, NSString;

@interface IESECLiveAnchorWidget : IESECLiveBaseWidget <IESECLiveMessageSubscriber>

@property (nonatomic) BOOL appeared;
@property (retain, nonatomic) IESECLiveApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)messageReceived_IESECLiveCommonMessage:(id)a0;
- (void)p_postScreenShotImageURLWithID:(id)a0;
- (id)p_takeScreenShot;
- (id)p_obtainImageFromView:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
