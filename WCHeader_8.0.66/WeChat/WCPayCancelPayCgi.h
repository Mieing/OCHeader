@class NSString;
@protocol WCPayCancelPayCgiDelegate;

@interface WCPayCancelPayCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayCancelPayCgiDelegate> cgiDelegate;
@property (retain, nonatomic) NSString *reqKey;

- (id)initWithDelegate:(id)a0 PayScene:(unsigned int)a1 PayChannel:(unsigned int)a2 ReqKey:(id)a3;
- (void)startRequest;
- (BOOL)selectCgi;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
