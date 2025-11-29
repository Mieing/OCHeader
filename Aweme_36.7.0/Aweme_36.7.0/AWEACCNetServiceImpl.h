@class NSString;

@interface AWEACCNetServiceImpl : NSObject <ACCNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParameters;
- (BOOL)needShowAWEApiErrorDescriptionWithError:(id)a0;
- (id)networkErrorDomain;
- (id)apiErrorDomain;
- (id)requestWithModel:(id /* block */)a0 completion:(id /* block */)a1;
- (id)uploadWithModel:(id /* block */)a0 progress:(id *)a1 completion:(id /* block */)a2;
- (id)defaultDomain;
- (id)POST:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
- (id)GET:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
- (void)downloadFileWithURL:(id)a0 destinationURL:(id)a1 supportTempFile:(BOOL)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (id)invalidParameterError;
- (id)useJSONrequestSerializerPOST:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
- (id)commonParametersForURLStr:(id)a0;
- (void)downloadWithModel:(id /* block */)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)doTrackWithURLString:(id)a0 method:(id)a1;
- (id)uploadWithURLString:(id)a0 params:(id)a1 headerField:(id)a2 timeout:(double)a3 fileURL:(id)a4 fileName:(id)a5 progress:(id *)a6 modelClass:(Class)a7 completion:(id /* block */)a8;
- (id)uploadWithURLString:(id)a0 parameters:(id)a1 headerField:(id)a2 timeout:(double)a3 constructingBodyWithBlock:(id /* block */)a4 progress:(id *)a5 needcommonParams:(BOOL)a6 modelClass:(Class)a7 callback:(id /* block */)a8;
- (void)cancel:(id)a0;

@end
