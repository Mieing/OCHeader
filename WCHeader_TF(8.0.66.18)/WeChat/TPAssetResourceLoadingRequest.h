@class TPAssetResourceLoadingDataRequest, NSString, NSMutableSet, TPAssetResourceLoadingContentInformationRequest;
@protocol TPAssetResourceLoadingRequestDelegate;

@interface TPAssetResourceLoadingRequest : NSObject <TPAssetResourceLoadingContentInformationRequestDelegate>

@property (weak, nonatomic) id<TPAssetResourceLoadingRequestDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *mergeRequestNumSet;
@property (nonatomic) int requestNum;
@property (readonly, nonatomic) NSString *fileName;
@property (retain, nonatomic) TPAssetResourceLoadingDataRequest *dataRequest;
@property (retain, nonatomic) TPAssetResourceLoadingContentInformationRequest *contentInformationRequest;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOffset:(long long)a0 length:(long long)a1 num:(int)a2 endOfResource:(BOOL)a3;
- (void)addRequestNum:(unsigned int)a0;
- (BOOL)isRequestMerged:(unsigned int)a0;
- (void)removeRequestWithNum:(unsigned int)a0;
- (BOOL)isEmptyLoadingRequest;
- (void)finishLoading;
- (void)onFillContentInformation:(id)a0;
- (void)setContentInformationRequest:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;

@end
