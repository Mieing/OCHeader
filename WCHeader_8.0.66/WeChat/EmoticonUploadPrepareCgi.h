@protocol EmoticonUploadPrepareCgiDelegate;

@interface EmoticonUploadPrepareCgi : StoreEmotionBaseCgi

@property (weak, nonatomic) id<EmoticonUploadPrepareCgiDelegate> delegate;

- (id)initWithUploadInfo:(id)a0 delegate:(id)a1;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
