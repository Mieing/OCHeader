@interface MPGetChannelFeedsDataHandler : NSObject <PBMessageObserverDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) MPGetChannelFeedsDataHandler *selfRetain;

+ (void)sendRequestWithCompletion:(id /* block */)a0;

- (id)initWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)asyncReleaseSelf;
- (void)sendRequest;
- (void)handleChannelchannelFeedsDataResp:(id)a0;
- (void)callbackCompletionIsSuccess:(BOOL)a0 channelFeedsData:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
