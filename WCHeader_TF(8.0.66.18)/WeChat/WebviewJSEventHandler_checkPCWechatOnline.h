@interface WebviewJSEventHandler_checkPCWechatOnline : WebviewJSEventHandlerBase

@property (nonatomic) unsigned long long targetDeviceType;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)isInLegalDeviceType:(id)a0;
- (void)refreshTargetDeviceType:(id)a0;
- (BOOL)canSendOpenCommandForTargetDevice;
- (BOOL)isInTargetDeviceType:(unsigned long long)a0;
- (BOOL)isXwechatDeviceForDeviceType:(unsigned int)a0;
- (BOOL)isXwechatDeviceSupportHandoffWithTargetDeviceType:(unsigned int)a0 clientVersion:(unsigned int)a1;

@end
