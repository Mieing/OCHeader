@class NSString, MMTimer, NSMutableData, NSURLConnection;
@protocol MMHttpConnectionDelegate, NSObject;

@interface MMHttpConnection : MMObject {
    unsigned int mStatusCode;
    unsigned int m_uiContentLen;
    id<MMHttpConnectionDelegate, NSObject> mDelegate;
    BOOL m_bGZip;
}

@property (retain, nonatomic) NSURLConnection *mUrlConn;
@property (retain, nonatomic) NSMutableData *mRecvData;
@property (retain, nonatomic) NSString *mCacheKey;
@property (nonatomic) unsigned int mConnProto;
@property (retain, nonatomic) NSString *m_nsFileName;
@property (retain, nonatomic) MMTimer *m_tmCheckTimeOut;
@property (nonatomic) unsigned int m_uiHttpType;
@property (retain, nonatomic) NSString *m_nsNotifyKey;
@property (nonatomic) BOOL isWebp;
@property (nonatomic) double timeInterval;

- (BOOL)connection:(id)a0 canAuthenticateAgainstProtectionSpace:(id)a1;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)handleMd5WithRaw:(id)a0 urlStr:(id)a1;
- (void)saveRawDataIfNeeded:(id)a0 fileName:(id)a1;
- (BOOL)setNormalRequestHeader:(id)a0;
- (BOOL)setPostRequestHeader:(id)a0 boundary:(id)a1;
- (BOOL)connectWithRequest:(id)a0;
- (id)initWithProtocol:(unsigned int)a0 andDelegate:(id)a1;
- (void)CancelTimer;
- (void)dealloc;
- (BOOL)getWithURL:(id)a0;
- (BOOL)getWithURL:(id)a0 andRefererHeader:(id)a1;
- (BOOL)sgetWithURL:(id)a0;
- (BOOL)spostWithURL:(id)a0 body:(id)a1 boundary:(id)a2;
- (void)cancelRequest;
- (void)TimeOut;
- (void).cxx_destruct;

@end
