@interface IESAccountErrorHandler : NSObject

+ (id)sharedInstance;

- (id)generateProcessedError:(id)a0 result:(long long)a1;
- (void)requestSendVoiceCodeWithMethod:(id)a0 originalParams:(id)a1 completion:(id /* block */)a2;
- (void)process2129Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (void)process4029Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (void)process2015Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (BOOL)processError:(id)a0 extraParams:(id)a1 response:(id)a2 completion:(id /* block */)a3;
- (void)handleError:(id)a0 extraParams:(id)a1 response:(id)a2 completion:(id /* block */)a3;

@end
