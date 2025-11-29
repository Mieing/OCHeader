@class BDPUniqueID, BDPRuntime;

@interface BDPGamePlatformBase : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL enabledAsyncCall;
@property (nonatomic) BOOL requestAddUniqueIDDisable;
@property (nonatomic) BOOL cachePerf;
@property (retain, nonatomic) BDPRuntime *context;

- (void)load:(id)a0 callback:(id /* block */)a1;
- (id)loadMedia:(id)a0;
- (void)loadUrl:(id)a0 callback:(id /* block */)a1;
- (BOOL)stopAccpetingEvent;
- (id)loadLocalFileWithPath:(id)a0 paramPath:(id)a1;
- (void)firstFrameDidDraw;
- (void)dipatchToJSContextRunningThreadAsync:(id /* block */)a0;
- (void)enableRunningThreadAsyncCall:(BOOL)a0;
- (id)load:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
