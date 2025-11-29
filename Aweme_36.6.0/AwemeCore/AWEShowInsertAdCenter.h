@class AWEShowAdInsertToolIntercept, NSArray, AWEShowAdInsertBaseConfig, AWEShowAdInsertToolTracker, AWEShowInsertAdCenterInsert, AWEShowInsertAdCenterRequest, NSMutableDictionary, NSNumber;

@interface AWEShowInsertAdCenter : NSObject

@property (retain, nonatomic) AWEShowAdInsertBaseConfig *baseConfig;
@property (retain, nonatomic) AWEShowInsertAdCenterInsert *adInsert;
@property (retain, nonatomic) AWEShowInsertAdCenterRequest *adRequest;
@property (retain, nonatomic) AWEShowAdInsertToolIntercept *intercept;
@property (retain, nonatomic) AWEShowAdInsertToolTracker *tracker;
@property (retain, nonatomic) id currentContainer;
@property (retain, nonatomic) NSNumber *currentPoints;
@property (retain, nonatomic) NSNumber *lastPoint;
@property (copy, nonatomic) NSArray *progressPoints;
@property (retain, nonatomic) NSMutableDictionary *progressState;
@property (retain, nonatomic) NSMutableDictionary *lastReqMsgDict;
@property (retain, nonatomic) NSMutableDictionary *reqCountDict;
@property (copy, nonatomic) id /* block */ currentModel;
@property (copy, nonatomic) id /* block */ currentDataSource;
@property (copy, nonatomic) id /* block */ currentTableView;
@property (copy, nonatomic) id /* block */ currentIndex;
@property (copy, nonatomic) id /* block */ adModel;
@property (copy, nonatomic) id /* block */ clientSideParams;
@property (copy, nonatomic) id /* block */ seriesExtraParams;
@property (copy, nonatomic) id /* block */ requestFinishedUpdateReqInfo;

- (void)updatePlayerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)requestSuccess:(id)a0;
- (void)insertAdWithModel:(id)a0;
- (void)trackRequestWithName:(id)a0 adModel:(id)a1 customParams:(id)a2;
- (void)insertSuccessWithModel:(id)a0;
- (void).cxx_destruct;
- (void)request;
- (void)start;
- (id)initWithConfig:(id)a0;

@end
