@class NSString;
@protocol StoreEmotionGetDesignerSimpleInfoCgiDelegate;

@interface StoreEmotionGetDesignerSimpleInfoCgi : StoreEmotionBaseCgi {
    NSString *m_designerId;
}

@property (weak, nonatomic) id<StoreEmotionGetDesignerSimpleInfoCgiDelegate> delegate;

- (id)init;
- (BOOL)startRequestWithDesignerId:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
