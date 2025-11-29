@class RPApdu, NSString, NSTimer, NFCTagReaderSession;
@protocol NFCISO7816Tag;

@interface JLPassportReader : NSObject <NFCTagReaderSessionDelegate>

@property (retain, nonatomic) RPApdu *rpApdu;
@property (retain, nonatomic) NFCTagReaderSession *session;
@property (retain, nonatomic) id<NFCISO7816Tag> currentTag;
@property (copy, nonatomic) NSString *K_ENC;
@property (copy, nonatomic) NSString *K_MAC;
@property (copy, nonatomic) NSString *RND_IFD;
@property (copy, nonatomic) NSString *K_IFD;
@property (copy, nonatomic) NSString *RND_ICC;
@property (copy, nonatomic) id /* block */ myRPData;
@property (retain, nonatomic) NSTimer *timerNFC;
@property (nonatomic) int counts;
@property (nonatomic) long long iReTryTimes;
@property (nonatomic) int count;
@property (retain, nonatomic) NSTimer *timerDaoJiShi;
@property (nonatomic) BOOL isBackImg;
@property (nonatomic) BOOL testBool;
@property (nonatomic) BOOL isUpload;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (nonatomic) BOOL bReadingState;
@property (nonatomic) BOOL isProgress;
@property (nonatomic) BOOL isConnectTag;
@property (copy, nonatomic) id /* block */ readerCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateNFCTimer;
- (void)stopNFCWithSuccess:(BOOL)a0 msg:(id)a1;
- (id)getMRZ:(id)a0 andDateOfBirth:(id)a1 andexpiryDate:(id)a2;
- (void)coreNFCAlloc;
- (id)calcCheckSum:(id)a0;
- (void)pauseDaoJiShi;
- (void)startDaoJiShi;
- (void)updateTimerDaoJiShi;
- (void)getChallenge;
- (void)stopNFCAndSendLastDataWithErrCode:(int)a0 withErrMessage:(id)a1 withSodFile:(id)a2;
- (id)selectFile:(unsigned long long)a0;
- (id)readFirst4Bytes;
- (id)readBinaryData:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)sendApdu:(id)a0 toProtected:(unsigned long long)a1;
- (id)doMutualAuthentication:(id)a0;
- (BOOL)doSessionKeys:(id)a0;
- (id)selectAndReadFile:(unsigned long long)a0;
- (BOOL)repeatReaderHandleWithErrCode:(int)a0 withSodFile:(id)a1;
- (id)exChangeDg11WithFileArray:(id)a0;
- (id)doInternalAuthenticate:(id)a0;
- (void)updateSessionMessageWithCount:(long long)a0;
- (void)countDownss;
- (void)RP_ReadPassportWithPassportNumber:(id)a0 birth:(id)a1 date:(id)a2 withIsImg:(BOOL)a3 data:(id /* block */)a4;
- (id)replaceImageHtml:(id)a0;
- (id)dataToStringWithData:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)dealloc;
- (void)countDown;
- (void)tagReaderSessionDidBecomeActive:(id)a0;
- (void)tagReaderSession:(id)a0 didDetectTags:(id)a1;
- (void)tagReaderSession:(id)a0 didInvalidateWithError:(id)a1;

@end
