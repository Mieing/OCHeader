@class NSString, NSDictionary, TTVideoEngineDNSParser, NSError, TTVideoEngineModel, NSMutableDictionary;
@protocol TTVideoEngineNetClient, TTVideoInfoFetcherDelegate;

@interface TTVideoEngineInfoFetcher : NSObject <TTVideoEngineDNSProtocol>

@property (nonatomic) long long retryIndex;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) TTVideoEngineModel *videoModel;
@property (retain, nonatomic) TTVideoEngineDNSParser *dnsParser;
@property (copy, nonatomic) NSString *apiIPURL;
@property (copy, nonatomic) NSString *auth;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *ptokenString;
@property (copy, nonatomic) NSString *urlWithoutParams;
@property (retain, nonatomic) NSMutableDictionary *mEnvParams;
@property (retain, nonatomic) NSMutableDictionary *mUnEnvParams;
@property (nonatomic) BOOL shouldEncrypt;
@property (retain, nonatomic) NSMutableDictionary *queryMap;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) BOOL getMethodEnable;
@property (nonatomic) long long canceledState;
@property (copy, nonatomic) NSString *keyseed;
@property (nonatomic) BOOL useFallbackApi;
@property (weak, nonatomic) id<TTVideoInfoFetcherDelegate> delegate;
@property (nonatomic) long long retryCount;
@property (readonly, nonatomic) double retryTimeInterval;
@property (copy, nonatomic) NSString *apiString;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) id<TTVideoEngineNetClient> networkSession;
@property (nonatomic) BOOL cacheModelEnable;
@property (nonatomic) long long apiversion;
@property (copy, nonatomic) NSString *projectTag;
@property (nonatomic) BOOL useEphemeralSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyError:(id)a0;
- (void)parser:(id)a0 didFinishWithAddress:(id)a1 error:(id)a2;
- (BOOL)isDelegateValid;
- (void)parser:(id)a0 didFailedWithError:(id)a1;
- (void)fetchInfoWithAPI:(id)a0 parameters:(id)a1 auth:(id)a2 vid:(id)a3 key:(id)a4;
- (void)fetchInfoWithAPI:(id)a0 parameters:(id)a1 auth:(id)a2;
- (void)fetchInfoWithAPI:(id)a0 parameters:(id)a1 auth:(id)a2 vid:(id)a3;
- (id)_getPtokenFromAPIString;
- (void)_didGetVaildVideoInfo:(id)a0;
- (void)fetchURL;
- (void)_cancelByUser:(BOOL)a0;
- (void)notifyDNSError:(id)a0;
- (id)parseAPIString:(id)a0;
- (void)retryFetchIfNeeded;
- (void)beginToFetch:(id)a0 postbody:(id)a1;
- (void)getInfoSuccess:(id)a0;
- (id)getSignatureGet;
- (id)getSignaturePost:(id)a0;
- (BOOL)_tryToNotifyIfCanceled;
- (long long)parseErrorCode:(id)a0;
- (void)parseDNSWithAPIString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end
