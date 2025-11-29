@class NFCTagReaderSession, NSString;
@protocol NFCISO7816Tag;

@interface JLNFCReader : NSObject <NFCTagReaderSessionDelegate>

@property (retain, nonatomic) NFCTagReaderSession *session;
@property (retain, nonatomic) id<NFCISO7816Tag> currentTag;
@property (copy, nonatomic) id /* block */ sResult;
@property (nonatomic) BOOL bReadingState;
@property (nonatomic) long long readCount;
@property (copy, nonatomic) id /* block */ readerCanceled;
@property (nonatomic) BOOL isConnectTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (long long)coreNFCAlloc2;
- (id)startSendApdu:(id)a0;
- (void)updateNFCMsg:(id)a0;
- (BOOL)isNFCReady;
- (id)sendApdu:(id)a0;
- (void)startWithNFCresultWithIsImg:(BOOL)a0 withResult:(id /* block */)a1;
- (void)stopNFCWithSuccess:(BOOL)a0 msg:(id)a1;
- (void).cxx_destruct;
- (void)tagReaderSessionDidBecomeActive:(id)a0;
- (void)tagReaderSession:(id)a0 didDetectTags:(id)a1;
- (void)tagReaderSession:(id)a0 didInvalidateWithError:(id)a1;

@end
