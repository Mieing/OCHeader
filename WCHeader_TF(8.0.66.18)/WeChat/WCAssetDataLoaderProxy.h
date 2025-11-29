@class WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCResourceLoaderMoniter, WCPlayerReporter, NSRecursiveLock, NSMutableArray, NSString;
@protocol WCAssetDataLoaderProxyDelegate;

@interface WCAssetDataLoaderProxy : WCPlayerObject

@property (nonatomic) int loadingRequestSeq;
@property (nonatomic) long long resourceType;
@property (retain, nonatomic) WCPlayerReporter *reporter;
@property (retain, nonatomic) WCPlayerPlayArgs *playerArgs;
@property (retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo;
@property (weak, nonatomic) id<WCAssetDataLoaderProxyDelegate> delegate;
@property (retain, nonatomic) WCResourceLoaderMoniter *loadingRequestMoniter;
@property (retain, nonatomic) NSMutableArray *arrLoadingRequest;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) unsigned long long responseTotalData;
@property (retain, nonatomic) NSString *logTag;

- (id)initWithPlayerArgs:(id)a0 playbackInfo:(id)a1 reporter:(id)a2 delegate:(id)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getRequestDataRangeWithSec:(double)a0;
- (id)downloader:(id)a0;
- (BOOL)fillInformationForRequest:(id)a0;
- (void)onNotAnyLoadingRequest;
- (void)removeLoadingRequests:(id)a0;
- (void)requestFirstSliceDataForLoadingRequest:(id)a0;
- (void)onReceiveNewLoadingRequest:(id)a0;
- (void)onReceiveDelLoadingRequest:(id)a0;
- (void)processLoadingRequest;
- (BOOL)respondDataWithLoadingRequest:(id)a0;
- (void)removeAllLoadingRequest;
- (id)getCurrentLoadingRequest;
- (unsigned long long)fileLength:(id)a0;
- (unsigned long long)getAvaibleLength:(id)a0;
- (id)getVideoData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
