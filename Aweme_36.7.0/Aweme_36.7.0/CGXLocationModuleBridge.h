@class NSString;
@protocol CGXLocationProtocol;

@interface CGXLocationModuleBridge : NSObject <CGXModuleProtocol> {
    void *nativeModule_;
    struct LocationModuleListenerBridge { void /* function */ **x0; id x1; } *listenerBridge_;
}

@property (weak, nonatomic) id<CGXLocationProtocol> listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct GnssSvInfo { struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; } x0; struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; } x1; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x2; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x3; struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; } x4; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x5; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x6; struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; } x7; })convertToGnssSvInfo:(id)a0;
- (void)onRequestLocation:(id)a0 locationRequestMessage:(id)a1;
- (void)sendLocationInfoToPod:(id)a0;
- (void)registerLocationListener:(id)a0;
- (void)unregisterLocationListener;
- (void)initModule:(void *)a0;
- (void)uninitModule;
- (void).cxx_destruct;

@end
