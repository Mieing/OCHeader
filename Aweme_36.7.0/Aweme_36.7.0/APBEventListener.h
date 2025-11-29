@protocol APBEventProtocol;

@interface APBEventListener : NSObject {
    struct set<APBEventType, std::less<APBEventType>, std::allocator<APBEventType>> { struct __tree<APBEventType, std::less<APBEventType>, std::allocator<APBEventType>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<APBEventType, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<APBEventType>> { unsigned long long __value_; } __pair3_; } __tree_; } _registeredEvents;
    struct map<std::string, long, std::less<std::string>, std::allocator<std::pair<const std::string, long>>> { struct __tree<std::__value_type<std::string, long>, std::__map_value_compare<std::string, std::__value_type<std::string, long>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _eventTriggered;
}

@property (weak, nonatomic) id<APBEventProtocol> delegate;

- (void)onTaskTimeout:(id)a0;
- (void)onAppResignActive:(id)a0;
- (void)onAppResumeActive:(id)a0;
- (void)onAppEnterForeground:(id)a0;
- (void)onAlertAppear:(id)a0;
- (void)onAlertDisappear:(id)a0;
- (void)onGlobalTimeout:(id)a0;
- (void)onAbnormalClose:(id)a0;
- (void)registerAllEvents;
- (void)unregisterAllEvents;
- (long long)eventTriggeredTimes:(long long)a0;
- (void)increaseTriggerCnt:(long long)a0;
- (void)removeTriggerCnt:(long long)a0;
- (id)_eventType:(long long)a0 withNoti:(id)a1;
- (void).cxx_destruct;
- (void)registerEvent:(long long)a0;
- (id)init;
- (void)unregisterEvent:(long long)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
