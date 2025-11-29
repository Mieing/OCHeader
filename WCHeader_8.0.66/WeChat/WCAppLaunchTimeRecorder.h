@class NSString;

@interface WCAppLaunchTimeRecorder : NSObject <INetworkStatusMgrExt, INewSyncExt> {
    struct unordered_map<WCAppLaunchTimeEvent, unsigned long long, std::hash<WCAppLaunchTimeEvent>, std::equal_to<WCAppLaunchTimeEvent>, std::allocator<std::pair<const WCAppLaunchTimeEvent, unsigned long long>>> { struct __hash_table<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::__unordered_map_hasher<WCAppLaunchTimeEvent, std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::hash<WCAppLaunchTimeEvent>, std::equal_to<WCAppLaunchTimeEvent>>, std::__unordered_map_equal<WCAppLaunchTimeEvent, std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::equal_to<WCAppLaunchTimeEvent>, std::hash<WCAppLaunchTimeEvent>>, std::allocator<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<WCAppLaunchTimeEvent, std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::hash<WCAppLaunchTimeEvent>, std::equal_to<WCAppLaunchTimeEvent>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<WCAppLaunchTimeEvent, std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::equal_to<WCAppLaunchTimeEvent>, std::hash<WCAppLaunchTimeEvent>>> { float __value_; } __p3_; } __table_; } _eventTimestamps;
    unsigned long long _processStartTime;
    BOOL _isBeingDebugged;
    BOOL _isNormalLaunch;
    BOOL _hasFinishedLaunching;
    NSString *_activePrewarm;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void)record:(unsigned long long)a0;
- (unsigned long long)timestamp:(unsigned long long)a0;
- (void)setIsNormalLaunch:(BOOL)a0;
- (void)reportAtStage:(unsigned long long)a0;
- (void)printTimeline;
- (id)eventName:(unsigned long long)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onNewSyncBegin;
- (void)onNewSyncStart;
- (void)onNewSyncFinish;
- (void)onNewSyncEnd;
- (void)onNewSyncOplogOK;
- (void)onNewSyncOplogFail;
- (void)onNewSyncOplogConnectFail;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
