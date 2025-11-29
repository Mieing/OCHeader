@protocol IESLiveCertifyCenter;

@interface IESLiveVSSendGiftAPIImpl : HTSLiveApi <IESLiveVSSendGiftAPI>

@property (retain, nonatomic) id<IESLiveCertifyCenter> certifyCenter;

- (void)sendGiftWithParams:(id)a0 completion:(id /* block */)a1;
- (id)pb_errorFromSpecialResponse:(id)a0 sendRequest:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
