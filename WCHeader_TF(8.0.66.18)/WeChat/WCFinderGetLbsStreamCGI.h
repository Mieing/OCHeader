@class NSData, FinderLbsStreamLocation;

@interface WCFinderGetLbsStreamCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long tabTipsObjectId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) int buisnessRequestType;
@property (retain, nonatomic) FinderLbsStreamLocation *realtimeLocation;

- (id)initWithLastBuffer:(id)a0 location:(id)a1 realtimeLocation:(id)a2 commentScene:(int)a3 requestType:(int)a4 tabTipsObjectId:(unsigned long long)a5 tabTipsByPassInfo:(id)a6 sucBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (int)requestType;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
