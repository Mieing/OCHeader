@class NSString;

@interface TPPlayerRichMediaAsyncRequesterWrapper : NSObject <ITPPlayerRichMediaAsyncRequesterWrapper> {
    struct shared_ptr<ITPPlayerRichMediaAsyncRequester> { struct ITPPlayerRichMediaAsyncRequester *__ptr_; struct __shared_weak_count *__cntrl_; } _richMediaAsyncRequester;
    struct TPPlayerRichMediaAsyncRequesterCallbackWrapper { void /* function */ **x0; id x1; id x2; } *_richMediaAsyncRequesterCallbackWrapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setRequesterCallback:(id)a0;
- (int)setRichMediaSource:(id)a0;
- (int)prepareAsync;
- (void)cancelRequestWithRequestId:(int)a0;
- (struct vector<TPPlayerRichMediaFeature, std::allocator<TPPlayerRichMediaFeature>> { struct TPPlayerRichMediaFeature *x0; struct TPPlayerRichMediaFeature *x1; struct __compressed_pair<TPPlayerRichMediaFeature *, std::allocator<TPPlayerRichMediaFeature>> { struct TPPlayerRichMediaFeature *x0; } x2; })features;
- (void)releaseRequester;
- (int)requestFeatureDataAsyncWithIndex:(int)a0 timeMs:(long long)a1;
- (int)requestFeatureDataAsyncWithIndex:(int)a0 timeMsArray:(const void *)a1;
- (int)requestFeatureDataAsyncWithIndex:(int)a0 timeRange:(const struct TPPlayerRichMediaTimeRange { long long x0; long long x1; } *)a1;
- (int)requestFeatureDataAsyncWithIndex:(int)a0 timeRangeArray:(const void *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
