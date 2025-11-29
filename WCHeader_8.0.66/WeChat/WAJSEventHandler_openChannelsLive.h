@interface WAJSEventHandler_openChannelsLive : WAJSEventHandler_BaseEvent

@property (nonatomic) BOOL isCallByAds;

- (void)handleJSEvent:(id)a0;
- (void)failBlockHandler:(int)a0;
- (id)createLivePermissionVerifyInfWithExtraData:(id)a0;
- (id)createAdsParamsWithExtraData:(id)a0;
- (BOOL)endOnOpen;
- (void)popOpenSDKTransferMMWebviewVC:(id)a0;

@end
