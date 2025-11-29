@class NSString, SKBuiltinBuffer_t;
@protocol StoreEmotionGetEmotionListCgiDelegate;

@interface StoreEmotionGetEmotionListCgi : StoreEmotionBaseCgi {
    unsigned int m_reqType;
    unsigned int m_scene;
    unsigned int m_category;
    SKBuiltinBuffer_t *m_reqBuf;
    SKBuiltinBuffer_t *m_emotionListBuf;
}

@property (retain, nonatomic) NSString *setKey;
@property (weak, nonatomic) id<StoreEmotionGetEmotionListCgiDelegate> delegate;
@property (readonly, nonatomic) BOOL hasMore;

- (id)initWithReqType:(unsigned int)a0 Scene:(unsigned int)a1;
- (id)initWithReqType:(unsigned int)a0 Scene:(unsigned int)a1 Category:(unsigned int)a2;
- (id)initWithReqType:(unsigned int)a0 Scene:(unsigned int)a1 SetKey:(id)a2;
- (id)initWithReqType:(unsigned int)a0 Scene:(unsigned int)a1 ListBuffer:(id)a2;
- (BOOL)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
