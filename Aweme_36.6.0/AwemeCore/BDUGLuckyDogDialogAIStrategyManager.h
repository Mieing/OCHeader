@class NSString, NSMutableArray;

@interface BDUGLuckyDogDialogAIStrategyManager : NSObject

@property (nonatomic) unsigned long long minimumPredictCounts;
@property (copy, nonatomic) NSString *originState;
@property (copy, nonatomic) NSString *targetState;
@property (nonatomic) BOOL shouldCheckOriginState;
@property (nonatomic) BOOL hasFetchColdStartPopupData;
@property (retain, nonatomic) NSMutableArray *popupIDSequence;
@property (retain, nonatomic) NSMutableArray *quickSlidePredictDataArray;
@property (retain, nonatomic) NSMutableArray *forceShowList;
@property (nonatomic) double forceShowTime;

+ (id)sharedInstance;

- (void)quickSlidePredictResultUpdate:(id)a0;
- (void)triggerForceShowStrategy:(id)a0;
- (void)popupDataHasFetched:(id)a0 showTime:(double)a1;
- (BOOL)isPopupMatchShowStrategy:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
