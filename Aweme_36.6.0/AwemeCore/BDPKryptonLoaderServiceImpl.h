@class BDPGamePlatformBase, NSString, NSOperationQueue, BDPUniqueID;

@interface BDPKryptonLoaderServiceImpl : NSObject <KryptonLoaderService>

@property (retain, nonatomic) BDPGamePlatformBase *platform;
@property (retain, nonatomic) NSOperationQueue *ioOperationQueue;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redirectURL:(id)a0;
- (void)loadURL:(id)a0 callback:(id /* block */)a1;
- (void)loadURL:(id)a0 withStreamLoadDelegate:(id)a1;
- (id)loadUrlSync:(id)a0;
- (BOOL)isDataUrl:(id)a0;
- (BOOL)isHttpOrHttpsUrl:(id)a0;
- (id)decodeDataUrl:(id)a0;
- (id)truncatePath:(id)a0;
- (id)initWithRuntime:(id)a0;
- (void)loadURLOnIOThread:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
