@interface WAJSEventHandler_chooseBizPoi : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)launchBizPoiSelectPage:(struct LaunchBizPoiSelectorInfo { void /* function */ **x0; int x1; int x2[3]; void *x3; void *x4; struct BizPoiSelectorGpsInfo *x5; struct RepeatedPtrField<biz::BizPoiSelectorGpsInfo> { void **x0; int x1; int x2; int x3; } x6; })a0 selectCallback:(id /* block */)a1;
- (id)buildCallbackData:(id)a0;

@end
