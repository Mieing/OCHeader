@class NSString, WCBaseCgi;

@interface WCCgiBlockHelper : NSObject <WCBaseCgiDelegate>

@property (retain, nonatomic) WCBaseCgi *baseCgi;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)helperWithInitBlock:(id /* block */)a0 startBlock:(id /* block */)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;

- (void)callFailWithResponse:(id)a0;
- (void)removeCallBack;
- (id)userDataForBaseCgi:(id)a0;
- (void)baseCgi:(id)a0 didGetResponse:(id)a1;
- (void)baseCgi:(id)a0 didGetResponseData:(id)a1;
- (void)baseCgi:(id)a0 didFailWithError:(id)a1 response:(id)a2;
- (void).cxx_destruct;

@end
