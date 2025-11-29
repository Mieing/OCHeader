@interface IESLiveIMMessageDecoder : IESLiveIMCustomMessageDecoder

@property (nonatomic) long long errorMsgTraceMaxCount;
@property (nonatomic) long long batchCount;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } firstBatchRWlock;
@property (nonatomic) long long firstBatchCount;

+ (id)IESLiveMessageDecoderTypeStringValue:(unsigned long long)a0;

- (void)decode:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
