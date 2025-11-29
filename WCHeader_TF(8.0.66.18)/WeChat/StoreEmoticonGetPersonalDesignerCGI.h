@class SKBuiltinBuffer_t;
@protocol StoreEmoticonGetPersonalDesignerCGIDelegate;

@interface StoreEmoticonGetPersonalDesignerCGI : StoreEmotionBaseCgi

@property (retain, nonatomic) SKBuiltinBuffer_t *reqBuffer;
@property (nonatomic) unsigned int designerUin;
@property (nonatomic) unsigned long long retryCnt;
@property (weak, nonatomic) id<StoreEmoticonGetPersonalDesignerCGIDelegate> delegate;

- (id)init;
- (id)initWithBuf:(id)a0 andDesignerUin:(unsigned int)a1;
- (BOOL)startRequest:(BOOL)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
