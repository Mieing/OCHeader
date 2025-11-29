@class BDImageXUploaderClient, NSString, NSMutableDictionary;
@protocol NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol;

@interface NLEProduceKitUploadComponent : NSObject <NLEProduceKitComponentPrivateProtocol, NLEProduceKitComponentProtocol, BDImageXUploadClientDelegate>

@property (retain, nonatomic) BDImageXUploaderClient *imageUploadClient;
@property (retain, nonatomic) NSString *zipPath;
@property (copy, nonatomic) id /* block */ originFramesBlock;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) id<NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol> nextComponent;
@property (retain, nonatomic) NSMutableDictionary *input;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL passThroughInput;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUploadDidFinish:(id)a0;
- (void)inputToProperty;
- (id)checkInput;
- (void)startWithResultBlock:(id /* block */)a0;
- (void)start:(id)a0 withResultBlock:(id /* block */)a1;
- (void)initUploader:(id)a0;
- (id)initWithDomain:(id)a0 framesCallback:(id /* block */)a1;
- (void)addInputWithfilePath:(id)a0;
- (void).cxx_destruct;
- (void)work;
- (void)addInput:(id)a0;
- (void)start;
- (id)componentDescription;
- (void)setResultBlock:(id /* block */)a0;

@end
