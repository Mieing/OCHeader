@class NSString, NSData;

@interface WCFinderFetchFinderMemberFeedPreviewCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *finderMemberTicket;
@property (nonatomic) int feedType;
@property (retain, nonatomic) NSData *lastBuff;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithFinderUsername:(id)a0 finderMemberTicket:(id)a1 feedType:(int)a2 lastBuff:(id)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
