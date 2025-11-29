@class NSString, NSArray, WCFinderAudienceReserveLiveCGIExtentParams;

@interface WCFinderAudienceReserveLiveCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *anchorUsername;
@property (copy, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *promoterToken;
@property (nonatomic) int enterType;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSArray *noticeAggregateTypeArray;
@property (retain, nonatomic) WCFinderAudienceReserveLiveCGIExtentParams *extentParams;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (nonatomic) unsigned long long refObjectId;

- (id)initWithAnchorUserName:(id)a0 noticeId:(id)a1 optype:(unsigned int)a2 scene:(unsigned int)a3 promoterToken:(id)a4 config:(id)a5 enterType:(int)a6 refObjectId:(unsigned long long)a7 sessionBuffer:(id)a8 aggregateTypeArray:(id)a9 extentParams:(id)a10 successBlock:(id /* block */)a11 failureBlock:(id /* block */)a12;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
