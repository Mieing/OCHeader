@class NSString, NSMutableDictionary;

@interface WCSCheckBehaviorMgr : MMRootService <MMServiceProtocol, ClickStatSwizzleExt> {
    NSMutableDictionary *_dicTextFieldCheck;
    BOOL _bEnableEventMonitor;
    struct shared_ptr<__WCSN::__WCSTECP> { struct __WCSTECP *__ptr_; struct __shared_weak_count *__cntrl_; } _TECInstance;
    struct map<unsigned int, unsigned long long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>> { struct __tree<std::__value_type<unsigned int, unsigned long long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long long>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } techeckts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)getTECEnable;
- (void)dealloc;
- (void)startTextFieldCheck:(unsigned int)a0;
- (void)pauseTextFieldCheck:(unsigned int)a0;
- (void)removeTextFieldCheck:(unsigned int)a0;
- (id)getTextFieldCheckData:(unsigned int)a0;
- (void)recordEvent:(id)a0;
- (BOOL)startRecord:(unsigned int)a0;
- (id)getRecord:(unsigned int)a0;
- (void)endRecord:(unsigned int)a0;
- (id)convertScenes:(unsigned int)a0;
- (void)onSendEvent:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
