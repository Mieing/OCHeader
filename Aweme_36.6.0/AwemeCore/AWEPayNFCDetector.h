@class NFCNDEFReaderSession, NSString, NSTimer, CJPayNFCConfig;

@interface AWEPayNFCDetector : NSObject <NFCNDEFReaderSessionDelegate>

@property (retain, nonatomic) NFCNDEFReaderSession *lastSession;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) CJPayNFCConfig *nfcSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)beginNFCScanAfterAppLaunch;
- (void)beginNFCScan:(unsigned long long)a0;
- (BOOL)startOptimize;
- (void)endNFCScan;
- (BOOL)tryHandleURLString:(id)a0;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)readerSession:(id)a0 didDetectTags:(id)a1;
- (void)readerSession:(id)a0 didInvalidateWithError:(id)a1;
- (void)readerSession:(id)a0 didDetectNDEFs:(id)a1;
- (void)readerSessionDidBecomeActive:(id)a0;
- (id)getConfig:(id)a0;

@end
