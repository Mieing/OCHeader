@class AVAssetResourceLoadingRequest;

@interface WCPlayerAVLoadingRequest : WCPlayerLoadingRequest

@property (retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest;

- (id)initWithResourceLoadingRequest:(id)a0;
- (unsigned long long)requestedOffset;
- (long long)requestedLength;
- (unsigned long long)currentOffset;
- (BOOL)requestsAllDataToEndOfResource;
- (BOOL)isFinished;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)a0;
- (BOOL)isShouldfillInformation;
- (BOOL)fillInformationWithMimeType:(id)a0 length:(long long)a1;
- (void)respondWithData:(id)a0;
- (void)notifyDataReady:(long long)a0 length:(long long)a1;
- (void).cxx_destruct;

@end
