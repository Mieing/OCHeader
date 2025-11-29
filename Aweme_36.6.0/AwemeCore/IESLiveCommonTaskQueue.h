@class IESLiveCommonTask;

@interface IESLiveCommonTaskQueue : NSObject {
    IESLiveCommonTask *_nlHead;
    IESLiveCommonTask *_nlTail;
    IESLiveCommonTask *_bpHead;
    IESLiveCommonTask *_bpTail;
    IESLiveCommonTask *_bgHead;
    IESLiveCommonTask *_bgTail;
    struct IESLiveTaskQueueSize { long long normal; long long breakup; long long background; } _size;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)popTask:(long long)a0;
- (id)popAllTasks;
- (id)filterTask:(id /* block */)a0 shouldReturn:(BOOL)a1;
- (void)insertTask:(id)a0;
- (id)popTasksWithfilter:(id /* block */)a0;
- (void)removeTasksWithFilter:(id /* block */)a0;
- (void)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clear;
- (id)init;
- (long long)size:(long long)a0;

@end
