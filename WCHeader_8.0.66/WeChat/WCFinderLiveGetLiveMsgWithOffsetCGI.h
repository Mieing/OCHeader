@class NSData, MMFinderLiveFootageReplayModel;

@interface WCFinderLiveGetLiveMsgWithOffsetCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int offsetInSecond;
@property (nonatomic) BOOL isContinualRequest;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) int scenario;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (retain, nonatomic) MMFinderLiveFootageReplayModel *footageReplayModel;

- (id)initWithTaskId:(id)a0 timeOffset:(unsigned int)a1 isContinualRequest:(BOOL)a2 lastBuffer:(id)a3 scenario:(int)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (id)initWithFootageReplayModel:(id)a0 timeOffset:(unsigned int)a1 isContinualRequest:(BOOL)a2 lastBuffer:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createGenericRequest;
- (void)createTargetedFootageReplayRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
