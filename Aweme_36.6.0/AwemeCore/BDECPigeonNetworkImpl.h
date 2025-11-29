@class NSString;

@interface BDECPigeonNetworkImpl : NSObject <BDECPigeonNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)postURL:(id)a0 appendQuery:(id)a1;
- (void)getWithURL:(id)a0 parameters:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
- (void)postTextWithURL:(id)a0 parameters:(id)a1 queryParameters:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
- (void)postJsonWithURL:(id)a0 parameters:(id)a1 queryParameters:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
- (void)upload:(id)a0 parameters:(id)a1 fileData:(id)a2 name:(id)a3 fileName:(id)a4 mimeType:(id)a5 progress:(id *)a6 completion:(id /* block */)a7;
- (id)userAgent;

@end
