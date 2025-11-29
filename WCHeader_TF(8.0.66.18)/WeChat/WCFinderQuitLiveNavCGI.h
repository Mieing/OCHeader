@class NSString, FinderLiveClientStatus, NSData, FinderClientStatus, FinderLiveReportBaseInfo;

@interface WCFinderQuitLiveNavCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL preload;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithTaskId:(id)a0 objectId:(unsigned long long)a1 objectNonceId:(id)a2 longitude:(float)a3 latitude:(float)a4 sessionBuffer:(id)a5 liveCookies:(id)a6 status:(id)a7 liveStatus:(id)a8 liveReportBaseInfo:(id)a9 lastBuffer:(id)a10 preload:(BOOL)a11 successBlock:(id /* block */)a12 failureBlock:(id /* block */)a13;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
