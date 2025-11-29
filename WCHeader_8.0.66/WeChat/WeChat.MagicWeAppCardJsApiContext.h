@interface WeChat.MagicWeAppCardJsApiContext : WeChat.MagicSclJsApiContext {
    void /* unknown type, empty encoding */ permissionDelegate;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ biz;

- (id)weappPluginWhiteList;
- (BOOL)getJSApiPermission:(id)a0 appid:(id)a1;
- (id)extractContextNameFromInvokeContextId:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;

@end
