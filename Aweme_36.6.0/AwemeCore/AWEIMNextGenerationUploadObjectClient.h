@class AWEIMNextGenerationUploadConfigModel, NSString, BDObjectUploaderClient, NSError, BDUploadObjectInfo;

@interface AWEIMNextGenerationUploadObjectClient : NSObject <BDObjectUploadClientDelegate, AWEIMNextGenerationUploadFileClientProtocol>

@property (copy, nonatomic) NSString *filePath;
@property (retain) AWEIMNextGenerationUploadConfigModel *config;
@property (retain, nonatomic) BDObjectUploaderClient *client;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDUploadObjectInfo *objectInfo;
@property (retain, nonatomic) NSString *MD5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)objectUploadDidFinish:(id)a0;
- (void)objectUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)objectUpload:(id)a0 onLogInfo:(id)a1;
- (void)objectUpload:(id)a0 fileIndex:(long long)a1 singleObject:(id)a2 error:(id)a3;
- (long long)objectUploadGetNetState:(id)a0;
- (void)uploadWithContext:(id)a0;
- (id)p_uploadCustomParameterString;
- (void)stopUpload;
- (id)p_objectUploaderClient;
- (id)p_hostName;
- (id)p_configDict;
- (id)p_requestParam;
- (id)p_authDict;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
