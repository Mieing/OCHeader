@class NSString, BDObjectUploaderClient;

@interface AWETokamakUploadHandler : NSObject <BDObjectUploadClientDelegate>

@property (retain, nonatomic) BDObjectUploaderClient *clientTop;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (nonatomic) unsigned long long requestNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)objectUploadDidFinish:(id)a0;
- (void)objectUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)objectUpload:(id)a0 onLogInfo:(id)a1;
- (void)objectUpload:(id)a0 fileIndex:(long long)a1 singleObject:(id)a2 error:(id)a3;
- (long long)objectUploadGetNetState:(id)a0;
- (void)logUploadInfo:(id)a0;
- (void)upload:(id)a0 uploadFlag:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
