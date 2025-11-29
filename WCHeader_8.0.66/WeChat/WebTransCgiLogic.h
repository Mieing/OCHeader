@class NSString, NSMutableArray;
@protocol WebTransCgiLogicDelegate;

@interface WebTransCgiLogic : NSObject

@property (nonatomic) int allRequestCgiNum;
@property (retain, nonatomic) NSMutableArray *cgiQueue;
@property (retain, nonatomic) NSMutableArray *returnedNodelistRepository;
@property (retain, nonatomic) NSMutableArray *returnedNodelistRepositoryForFirstScreen;
@property (weak, nonatomic) id<WebTransCgiLogicDelegate> delegate;
@property (nonatomic) int hasRequestCgiNum;
@property (nonatomic) int concurrentNum;
@property (nonatomic) int minPackNodeCount;
@property (nonatomic) double bounceDelayForNonFirstScreen;
@property (nonatomic) double bounceDelayForFirstScreen;
@property (retain, nonatomic) NSString *curWebPageUrl;

- (id)init;
- (void)dealloc;
- (id)nodeListToJSON:(id)a0;
- (void)slicePackAndSendCgi:(id)a0 nodeCountPerPack:(long long)a1 isFirstScreen:(BOOL)a2;
- (void)sliceAndPack:(id)a0;
- (void)doRequestCgi;
- (void)requestCgiAndReturn:(id)a0;
- (void)handleCgiReturn:(id)a0;
- (void)bounceForFirstScreen:(id)a0;
- (void)bounceForNonFirstScreen:(id)a0;
- (void).cxx_destruct;

@end
