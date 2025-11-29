@interface InternalAppTerminateManager : NSObject {
    struct list<liteav::LogUploaderInterface::InstanceInfo, std::allocator<liteav::LogUploaderInterface::InstanceInfo>> { struct __list_node_base<liteav::LogUploaderInterface::InstanceInfo, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<liteav::LogUploaderInterface::InstanceInfo, void *>>> { unsigned long long __value_; } __size_alloc_; } _instance_info_list;
}

+ (id)sharedInstance;

- (id)init;
- (void)saveInstanceInfo:(unsigned int)a0 roomId:(const void *)a1 userId:(const void *)a2 strRole:(const void *)a3;
- (void)deleteInstanceInfo:(unsigned int)a0 roomId:(const void *)a1 userId:(const void *)a2 strRole:(const void *)a3;
- (void)onAppTerminate;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
