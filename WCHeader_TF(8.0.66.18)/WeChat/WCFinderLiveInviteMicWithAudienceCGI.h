@class WCFinderDataItem, NSData, WCFinderContact;

@interface WCFinderLiveInviteMicWithAudienceCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) BOOL withVideo;
@property (nonatomic) unsigned int seatId;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 toFinderContact:(id)a2 withVideo:(BOOL)a3 seatId:(unsigned int)a4 liveCookies:(id)a5 completion:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
