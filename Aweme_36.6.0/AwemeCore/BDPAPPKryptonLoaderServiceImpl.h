@class NSString, BDPUniqueID;

@interface BDPAPPKryptonLoaderServiceImpl : NSObject <KryptonLoaderService>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redirectURL:(id)a0;
- (void)loadURL:(id)a0 callback:(id /* block */)a1;
- (void)loadURL:(id)a0 withStreamLoadDelegate:(id)a1;
- (id)loadUrlSync:(id)a0;
- (BOOL)stopAccpetingEvent;
- (BOOL)isDataUrl:(id)a0;
- (BOOL)isHttpOrHttpsUrl:(id)a0;
- (id)decodeDataUrl:(id)a0;
- (id)truncatePath:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
