@protocol UnisusInspectorAgent;

@interface UnisusInspector : NSObject {
    struct unique_ptr<uni::inspector::InspectorInstance, std::default_delete<uni::inspector::InspectorInstance>> { struct InspectorInstance *__ptr_; } instance;
    struct InspectorAgentWrap { void /* function */ **_vptr$WebSocketChannel; id<UnisusInspectorAgent> agent; } wrap;
}

- (void)sendToJS:(id)a0;
- (id)init:(void *)a0;
- (void).cxx_destruct;
- (void)connect:(id)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
