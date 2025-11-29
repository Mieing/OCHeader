@class NSString, NSData, WCFinderDataItem, NSMutableArray, FinderActivateLiveMicRequest_MicInfo;

@interface WCFinderActivateLiveMicCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (copy, nonatomic) NSString *liveMicId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) long long micType;
@property (nonatomic) unsigned long long reportScene;
@property (retain, nonatomic) NSMutableArray *micInfoList;
@property (retain, nonatomic) NSMutableArray *micAudienceList;
@property (retain, nonatomic) NSMutableArray *otherRoomMicInfoList;
@property (retain, nonatomic) NSMutableArray *unknownMicInfoList;
@property (retain, nonatomic) FinderActivateLiveMicRequest_MicInfo *selfAnchorMicInfo;
@property (nonatomic) long long scene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initForAudienceWithDataItem:(id)a0 micType:(long long)a1 liveMicId:(id)a2 liveCookies:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (id)initForAnchorWithDataItem:(id)a0 micType:(long long)a1 reportScene:(unsigned long long)a2 micInfoList:(id)a3 micAudienceList:(id)a4 otherRoomMicInfoList:(id)a5 unknownMicInfoList:(id)a6 selfAnchorMicInfo:(id)a7 liveCookies:(id)a8 successBlock:(id /* block */)a9 failBlock:(id /* block */)a10;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
