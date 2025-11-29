@class SendPatWrap, NSString;

@interface SendPatCgi : WCBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (retain, nonatomic) SendPatWrap *sendPatWrap;
@property (readonly, nonatomic) NSString *fromUserName;
@property (readonly, nonatomic) NSString *pattedUserName;
@property (readonly, nonatomic) NSString *chatUserName;

- (id)init;
- (void)sendPatWithSuccessBlock:(id /* block */)a0 andFailureBlock:(id /* block */)a1;
- (void)retrievePatSuffixWithSuccessBlock:(id /* block */)a0;
- (BOOL)isRetrievePatSuffix;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
