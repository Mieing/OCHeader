@interface MBEventHandler_private_openChannelsLive : MBEventHandlerBaseAsync

@property (nonatomic) BOOL isAdCalled;

- (void)invoke:(id)a0;
- (void)failBlockHandler:(int)a0;
- (id)createAdsParamsWithExtraData:(id)a0;
- (id)apiName;

@end
