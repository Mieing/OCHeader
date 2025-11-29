@protocol HBBusinessCallbackCgiDelegate;

@interface HBBusinessCallbackCgi : WCPayBaseCgi

@property (weak, nonatomic) id<HBBusinessCallbackCgiDelegate> m_cgiDelegate;
@property (nonatomic) unsigned long long requestType;

- (id)initWithDelegate:(id)a0 type:(unsigned long long)a1;
- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
