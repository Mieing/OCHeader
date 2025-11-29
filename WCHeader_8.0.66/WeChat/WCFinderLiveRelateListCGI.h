@class NSData, NSString;

@interface WCFinderLiveRelateListCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceID;
@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSData *liveRelatedLastBuff;
@property (retain, nonatomic) NSData *liveCookies;

- (id)initWithLastBuff:(id)a0 tid:(id)a1 nonceID:(id)a2 sessionID:(id)a3 location:(id)a4 scene:(long long)a5 commentScene:(int)a6 clientStatus:(id)a7 liveClientStatus:(id)a8 lbsTabTipsInfo:(id)a9 liveRelatedLastBuff:(id)a10 commByPass:(id)a11 pullType:(int)a12 readStats:(id)a13 curObjectIndex:(long long)a14 liveCookies:(id)a15 requestScene:(int)a16 successful:(id /* block */)a17 failure:(id /* block */)a18;
- (BOOL)needADDeviceInfo;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)getRoomStateWithAvgSpeed:(unsigned int)a0;
- (void).cxx_destruct;

@end
