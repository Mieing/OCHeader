@class FinderLiveLocation, NSData, WCFinderDataItem, WCFinderContact;

@interface WCFinderLiveApplyMicWithAudienceCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL withVideo;
@property (retain, nonatomic) FinderLiveLocation *finderLiveLocation;
@property (nonatomic) unsigned int seatId;
@property (nonatomic) BOOL isInvitedByAnchor;
@property (retain, nonatomic) NSData *inviteMicBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 toFinderContact:(id)a2 isAnchor:(BOOL)a3 withVideo:(BOOL)a4 finderLiveLocation:(id)a5 seatId:(unsigned int)a6 isInvitedByAnchor:(BOOL)a7 inviteMicBuffer:(id)a8 liveCookies:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
