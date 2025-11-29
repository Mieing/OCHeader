@class IESLiveEnterRoomAisle, IESLiveInnerFeedContext, NSString;

@interface IESLiveFeedDataProviderTransferRecommendRequestRewriteParamsInjection : NSObject <IESLiveInnerFeedDataProviderInjectionProtocol>

@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willFetchWithURL:(id)a0 withDataChangedType:(unsigned long long)a1 parameters:(id)a2 updateBlock:(id /* block */)a3;
- (void)didFetchWithResponse:(id)a0 error:(id)a1;
- (long long)injectionPriority;
- (id)initWithRoomAisle:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
