@class NSArray, BDObjectUploaderClient, NSString, IESEffectUploadConfiguration;

@interface IESEffectUploadTask : NSObject <BDObjectUploadClientDelegate>

@property (retain, nonatomic) BDObjectUploaderClient *uploadClient;
@property (retain, nonatomic) IESEffectUploadConfiguration *uploadConfig;
@property (copy, nonatomic) NSArray *filePaths;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (copy, nonatomic) id /* block */ releaseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startUpload;
- (void)objectUploadDidFinish:(id)a0;
- (void)objectUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)objectUpload:(id)a0 onLogInfo:(id)a1;
- (void)objectUpload:(id)a0 fileIndex:(long long)a1 singleObject:(id)a2 error:(id)a3;
- (long long)objectUploadGetNetState:(id)a0;
- (id)initWithFilePaths:(id)a0 uploadConfig:(id)a1;
- (id)p_uploadConfigParams;
- (id)p_uploadAuthParams;
- (void).cxx_destruct;

@end
