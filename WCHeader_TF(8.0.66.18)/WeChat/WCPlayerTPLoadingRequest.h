@class TPAssetResourceLoadingRequest;

@interface WCPlayerTPLoadingRequest : WCPlayerLoadingRequest

@property (retain, nonatomic) TPAssetResourceLoadingRequest *loadingRequest;

- (id)initWithResourceLoadingRequest:(id)a0;
- (BOOL)isM3U8;
- (unsigned long long)requestedOffset;
- (long long)requestedLength;
- (unsigned long long)currentOffset;
- (BOOL)requestsAllDataToEndOfResource;
- (BOOL)isFinished;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestRange;
- (BOOL)isShouldfillInformation;
- (void)setNotifyDataPath:(id)a0;
- (BOOL)fillInformationWithMimeType:(id)a0 length:(long long)a1;
- (void)respondWithData:(id)a0;
- (void)notifyDataReady:(long long)a0 length:(long long)a1;
- (void)finishLoadingWithError:(id)a0;
- (void)finishLoading;
- (id)fileName;
- (void).cxx_destruct;

@end
