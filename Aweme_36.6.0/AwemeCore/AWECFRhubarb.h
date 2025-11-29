@interface AWECFRhubarb : NSObject

+ (void)unzipZipFile:(id)a0 toDirecotry:(id)a1 completion:(id /* block */)a2;
+ (id)fetchModulesWithRequest:(id)a0 toDirecotry:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)statusMap:(id)a0;
+ (id)fetchModulesWithRequest:(id)a0 toDirecotry:(id)a1 completion:(id /* block */)a2;
+ (id)fetchModule:(id)a0 toDirecotry:(id)a1 requestType:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)fetchModelListWithRequest:(id)a0 completion:(id /* block */)a1;
+ (id)startFetchModelListWithRequest:(id)a0 completion:(id /* block */)a1;
+ (void)handleModuleListRequestData:(id)a0 error:(id)a1 request:(id)a2 moduleRequest:(id)a3 statusCode:(long long)a4 responseDescription:(id)a5 completion:(id /* block */)a6;
+ (id)startFetchModule:(id)a0 toDirecotry:(id)a1 requestType:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)handleModuleRequestWithData:(id)a0 zipTmpPath:(id)a1 aModel:(id)a2 error:(id)a3 toDirecotry:(id)a4 urlString:(id)a5 completion:(id /* block */)a6;

@end
