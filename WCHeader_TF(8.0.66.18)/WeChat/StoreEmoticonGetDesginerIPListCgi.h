@class NSData;
@protocol StoreEmoticonGetDesginerIPListCgiDelegate;

@interface StoreEmoticonGetDesginerIPListCgi : StoreEmotionBaseCgi

@property (retain, nonatomic) NSData *context;
@property (nonatomic) unsigned int designerUin;
@property (weak, nonatomic) id<StoreEmoticonGetDesginerIPListCgiDelegate> delegate;

- (id)init;
- (id)initWithContext:(id)a0 andDesignerUin:(unsigned int)a1;
- (BOOL)startRequest:(BOOL)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
