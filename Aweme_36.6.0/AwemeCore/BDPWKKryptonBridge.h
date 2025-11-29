@class BDPXHRBuffer, KryptonApp, BDPUniqueID, WKKryptonApp;

@interface BDPWKKryptonBridge : NSObject

@property (nonatomic) BOOL useKryptonMerged;
@property (weak, nonatomic) WKKryptonApp *app;
@property (weak, nonatomic) KryptonApp *appMerged;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPXHRBuffer *xhrBuffer;
@property (nonatomic) unsigned long long nextRequestID;
@property (nonatomic) unsigned long long disorderCount;
@property (nonatomic) BOOL xhrOrdered;
@property (nonatomic) unsigned long long xhrNativeBufferSize;

- (unsigned long long)getDisorderCount;
- (BOOL)isKryptonMerged;
- (void)processMessage:(unsigned long long)a0 message:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (void)disorderVerify:(unsigned long long)a0;
- (void)init:(id)a0 uniqueID:(id)a1;
- (void)initForKryptonMerged:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
