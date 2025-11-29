@class BDXForestSSRBinaryHeader, BDXForestSSRBinaryFrame, BDXThreadSafeDictionary, BDXForestSSRInitialData, NSError, BDXForestSSRHydrateTemplate;
@protocol BDXForestSSRClientDelegateProtocol;

@interface BDXForestSSRClient : NSObject

@property (weak, nonatomic) id<BDXForestSSRClientDelegateProtocol> delegate;
@property (retain) NSError *error;
@property (retain) BDXForestSSRHydrateTemplate *hydrateTemplate;
@property (retain, nonatomic) BDXForestSSRBinaryHeader *ssrHeader;
@property (retain, nonatomic) BDXForestSSRBinaryFrame *ssrDataFrame;
@property (retain) BDXForestSSRInitialData *initialDataFrame;
@property (nonatomic) unsigned char parsedFrameCount;
@property (retain, nonatomic) BDXForestSSRBinaryFrame *curFrame;
@property (nonatomic) unsigned long long curLoc;
@property (retain, nonatomic) BDXThreadSafeDictionary *metric;

+ (id)clientWithDelegate:(id)a0;

- (void)processRawResponseHeader:(id)a0 errorCallback:(id /* block */)a1;
- (void)processRawChunkData:(id)a0 totalData:(id)a1 completion:(id /* block */)a2;
- (void)finishProcess:(id)a0 completion:(id /* block */)a1;
- (void)didReceiveLynxSSRError:(id)a0;
- (id)timeNow;
- (void)reportError:(id)a0 errorCallback:(id /* block */)a1;
- (void)reportErrorWithCode:(unsigned long long)a0 message:(id)a1 errorCallback:(id /* block */)a2;
- (void)triggerSSRHydrateIfNeeded;
- (void)didReceivedSSRData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
