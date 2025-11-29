@class NSString;

@interface TPIOSAudioRouteManagerImpl : NSObject <ITPAppleAudioRouteImpl> {
    struct set<ITPAudioRouteManagerCallback *, std::less<ITPAudioRouteManagerCallback *>, std::allocator<ITPAudioRouteManagerCallback *>> { struct __tree<ITPAudioRouteManagerCallback *, std::less<ITPAudioRouteManagerCallback *>, std::allocator<ITPAudioRouteManagerCallback *>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<ITPAudioRouteManagerCallback *, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<ITPAudioRouteManagerCallback *>> { unsigned long long __value_; } __pair3_; } __tree_; } _callbacks;
    struct deque<TPAudioRouteDescription, std::allocator<TPAudioRouteDescription>> { struct __split_buffer<TPAudioRouteDescription *, std::allocator<TPAudioRouteDescription *>> { struct TPAudioRouteDescription **__first_; struct TPAudioRouteDescription **__begin_; struct TPAudioRouteDescription **__end_; struct __compressed_pair<TPAudioRouteDescription **, std::allocator<TPAudioRouteDescription *>> { struct TPAudioRouteDescription **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<TPAudioRouteDescription>> { unsigned long long __value_; } __size_; } _currentRoutes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addCallback:(struct ITPAudioRouteManagerCallback { void /* function */ **x0; } *)a0;
- (void)removeCallback:(struct ITPAudioRouteManagerCallback { void /* function */ **x0; } *)a0;
- (struct deque<TPAudioRouteDescription, std::allocator<TPAudioRouteDescription>> { struct __split_buffer<TPAudioRouteDescription *, std::allocator<TPAudioRouteDescription *>> { struct TPAudioRouteDescription **x0; struct TPAudioRouteDescription **x1; struct TPAudioRouteDescription **x2; struct __compressed_pair<TPAudioRouteDescription **, std::allocator<TPAudioRouteDescription *>> { struct TPAudioRouteDescription **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::allocator<TPAudioRouteDescription>> { unsigned long long x0; } x2; })getCurrentRoutes;
- (BOOL)isRouteTypeOn:(int)a0;
- (int)getRouteTypeFromAVAudioSessionPort:(id)a0;
- (void)updateCurrentRoutesFromOutputs:(id)a0;
- (void)initCurrentRoutes;
- (void)registerObserver;
- (void)unRegisterObserver;
- (void)onAudioSessionRouteChange:(id)a0;
- (void)updateCurrentRoute:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
