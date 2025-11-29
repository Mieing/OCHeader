@protocol GetWishinigRecommandSkinCgiDelegate;

@interface GetWishinigRecommandSkinCgi : WCPayBaseCgi

@property (weak, nonatomic) id<GetWishinigRecommandSkinCgiDelegate> m_delegate;
@property (nonatomic) unsigned long long requestTimestamp;

- (void)startRequest:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
