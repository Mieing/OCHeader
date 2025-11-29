@class NSString, NSData, WCFinderDataItem, WCFinderContact;

@interface WCFinderLiveAcceptMicWithAudienceCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *sdkUserId;
@property (nonatomic) BOOL withVideo;
@property (nonatomic) unsigned int seatId;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 toFinderContact:(id)a2 isAnchor:(BOOL)a3 sdkUserId:(id)a4 withVideo:(BOOL)a5 seatId:(unsigned int)a6 sessionId:(id)a7 liveCookies:(id)a8 successBlock:(id /* block */)a9 failBlock:(id /* block */)a10;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
