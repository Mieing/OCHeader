@class NSString, NSData, WCFinderDataItem, LiveRoomImg, WCFinderContact;

@interface WCFinderAcceptLiveMicCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (copy, nonatomic) NSString *sdkUserId;
@property (nonatomic) unsigned int sdkRoomId;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) NSString *coverImageUrlString;
@property (retain, nonatomic) NSData *randomMicBuffer;
@property (retain, nonatomic) LiveRoomImg *applyLiveRoomImages;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 toFinderContact:(id)a2 sdkUserId:(id)a3 sdkRoomId:(unsigned int)a4 sessionId:(id)a5 coverImageUrlString:(id)a6 liveRoomImages:(id)a7 liveCookies:(id)a8 randomMicBuffer:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
