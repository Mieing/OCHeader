@class NSString, RTVJetWebSocketNotifyHandler, NSObject;
@protocol OS_dispatch_queue, RTVJetWebSocketBridgeInterface, RxInjector;

@interface RTVJetWebSocketClient : NSObject {
    struct unordered_map<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *, BDHLCKeyHashID, BDHLCKeyEqualID, std::allocator<std::pair<NSString *const, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>>> { struct __hash_table<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, BDHLCKeyHashID, BDHLCKeyEqualID>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, BDHLCKeyEqualID, BDHLCKeyHashID>, std::allocator<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _callbacks;
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (retain, nonatomic) id<RTVJetWebSocketBridgeInterface> webSocketBridge;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageSendQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy, nonatomic) NSString *businessTag;
@property (readonly, nonatomic) RTVJetWebSocketNotifyHandler *notifyHandler;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (void)rxAwakeFromPropertyInjection;
- (void)registerNotifyHandler:(id)a0 ofService:(int)a1;
- (void)unregisterNotifyHandler:(id)a0 ofService:(int)a1;
- (id)initWithBusinessTag:(id)a0;
- (void)__storeRequestCallback:(id)a0 forKey:(id)a1;
- (void)__removeRequestCallbackForKey:(id)a0;
- (id)callbackAndRemoveForKey:(id)a0;
- (id)enqueue:(id)a0;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
