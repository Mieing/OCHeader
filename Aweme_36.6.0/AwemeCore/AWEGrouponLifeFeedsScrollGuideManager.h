@class NSString;
@protocol AWEGrouponLifeFeedsScrollGuideTaskProtocol;

@interface AWEGrouponLifeFeedsScrollGuideManager : NSObject <AWEGrouponLifeFeedsScrollGuideTaskProtocol>

@property (nonatomic) unsigned long long requestTaskType;
@property (nonatomic) unsigned long long taskType;
@property (retain, nonatomic) id<AWEGrouponLifeFeedsScrollGuideTaskProtocol> taskHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)performNetworkRequestWithParams:(id)a0 retry:(long long)a1 completion:(id /* block */)a2;
- (void)handleScrollWithDuration:(double)a0;
- (void)handleClickWithItemTag:(id)a0;
- (void)handleClickReturnWithItemTag:(id)a0;
- (void)trackLifeFeedLotterySuccessResult:(id)a0;
- (void)performNetworkRequestWithParams:(id)a0 completion:(id /* block */)a1;
- (void)configureTaskWithData:(id)a0;
- (void)stopTaskWithData:(id)a0;
- (void).cxx_destruct;
- (void)stopTask;

@end
