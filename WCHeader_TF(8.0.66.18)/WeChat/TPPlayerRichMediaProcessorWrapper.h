@class NSString;

@interface TPPlayerRichMediaProcessorWrapper : NSObject <ITPPlayerRichMediaProcessorWrapper> {
    struct shared_ptr<ITPPlayerRichMediaProcessor> { struct ITPPlayerRichMediaProcessor *__ptr_; struct __shared_weak_count *__cntrl_; } _richMediaProcess;
    struct TPPlayerRichMediaProcessorCallbackWrapper { void /* function */ **x0; void /* function */ **x1; id x2; id x3; id x4; } *_richMediaProcessCallbackWrapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setProcessorCallback:(id)a0;
- (int)setRichMediaSource:(id)a0;
- (int)prepareAsync;
- (struct vector<TPPlayerRichMediaFeature, std::allocator<TPPlayerRichMediaFeature>> { struct TPPlayerRichMediaFeature *x0; struct TPPlayerRichMediaFeature *x1; struct __compressed_pair<TPPlayerRichMediaFeature *, std::allocator<TPPlayerRichMediaFeature>> { struct TPPlayerRichMediaFeature *x0; } x2; })features;
- (int)selectFeatureAsync:(int)a0 extraRequestInfo:(const struct TPPlayerRichMediaExtraRequestInfo { int x0; } *)a1;
- (int)deselectFeatureAsync:(int)a0;
- (int)getcurrentPositionMs:(long long)a0 richMediaTypes:(const void *)a1 featureData:(void *)a2;
- (void)releaseRichMedia;
- (int)reset;
- (int)seek:(long long)a0;
- (void)setInnerProcessCallback:(id)a0;
- (int)setPlaybackRate:(float)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
