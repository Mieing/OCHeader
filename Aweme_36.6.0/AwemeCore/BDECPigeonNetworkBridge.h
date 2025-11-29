@class BDECPigeonClientV2, BDECPigeonNetworkImpl, NSString;

@interface BDECPigeonNetworkBridge : NSObject

@property (retain, nonatomic) BDECPigeonNetworkImpl *innerNetwork;
@property (weak, nonatomic) BDECPigeonClientV2 *client;
@property (copy) NSString *requestHost;
@property (copy) id /* block */ requestCommonParamsBlock;
@property (copy) id /* block */ requestCommonHeadersBlock;
@property (copy) id /* block */ trackCommonParamsBlock;

- (void)getWithPath:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)uploadWithPath:(id)a0 parameters:(id)a1 fileData:(id)a2 name:(id)a3 fileName:(id)a4 mimeType:(id)a5 progress:(id *)a6 completion:(id /* block */)a7;
- (void)postJsonWithPath:(id)a0 parameters:(id)a1 queryParameters:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
- (void)postJsonWithPath:(id)a0 parameters:(id)a1 queryParameters:(id)a2 completion:(id /* block */)a3;
- (void)postTextWithPath:(id)a0 parameters:(id)a1 queryParameters:(id)a2 completion:(id /* block */)a3;
- (id)requestHeadersAppendCommonHeaders:(id)a0;
- (id)generateFullURLWithPath:(id)a0;
- (id)appendCommonQueryParams:(id)a0;
- (void)monitorServiceWithURLStr:(id)a0 jsonObj:(id)a1 statusCode:(long long)a2 logId:(id)a3 startTime:(long long)a4 endTime:(long long)a5 error:(id)a6;
- (void)getWithPath:(id)a0 parameters:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
- (void)postTextWithPath:(id)a0 parameters:(id)a1 queryParameters:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
- (id)userAgent;
- (void).cxx_destruct;
- (id)network;
- (id)initWithClient:(id)a0;

@end
