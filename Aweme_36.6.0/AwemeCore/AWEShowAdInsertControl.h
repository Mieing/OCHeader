@class AWEShowAdInsertBaseConfig, AWEShowInsertAdCenter, NSString;
@protocol AWEShowPlayletAdInsertHandler;

@interface AWEShowAdInsertControl : NSObject <AWEShowPlayletAdInsertProtocol>

@property (retain, nonatomic) AWEShowAdInsertBaseConfig *baseConfig;
@property (retain, nonatomic) AWEShowInsertAdCenter *adCenter;
@property (weak, nonatomic) id<AWEShowPlayletAdInsertHandler> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initTriggerAdWithConfig:(id)a0;
- (id)showPlayletADContainerModel;
- (id)showPlayletADContainerDataSource;
- (id)showPlayletClientSideParamsJsonString;
- (id)seriesExtraParamsJsonString;
- (void)adInsertControlCallBackWithModel:(id)a0;
- (void)requestFinishedUpdateReqInfo;
- (void)updatePlayerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (id)showPlayletADContainerTableViewController;
- (long long)showPlayletADTableViewPlayIndex;
- (void).cxx_destruct;
- (void)start;

@end
