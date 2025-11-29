@class NSString;
@protocol StoreEmoticonGetDesignerAcctInfoCgiDelegate;

@interface StoreEmoticonGetDesignerAcctInfoCgi : StoreEmotionBaseCgi

@property (retain, nonatomic) NSString *designerId;
@property (nonatomic) unsigned int designerUin;
@property (weak, nonatomic) id<StoreEmoticonGetDesignerAcctInfoCgiDelegate> delegate;

- (id)init;
- (BOOL)startRequestWithDesignerId:(id)a0;
- (BOOL)startRequestWithDesignerUin:(unsigned int)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
