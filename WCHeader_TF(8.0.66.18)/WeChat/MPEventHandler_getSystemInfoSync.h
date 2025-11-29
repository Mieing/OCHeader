@class MPGetSystemInfoImpl;

@interface MPEventHandler_getSystemInfoSync : MBEventHandlerBaseSync

@property (retain, nonatomic) MPGetSystemInfoImpl *impl;

- (id)init;
- (id)apiName;
- (id)invoke:(id)a0;
- (void).cxx_destruct;

@end
