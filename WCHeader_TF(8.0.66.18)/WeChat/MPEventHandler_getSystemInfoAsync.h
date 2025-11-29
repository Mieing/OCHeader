@class MPGetSystemInfoImpl;

@interface MPEventHandler_getSystemInfoAsync : MBEventHandlerBaseAsync

@property (retain, nonatomic) MPGetSystemInfoImpl *impl;

- (id)init;
- (id)apiName;
- (void)invoke:(id)a0;
- (void).cxx_destruct;

@end
