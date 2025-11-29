@class NSMutableArray;
@protocol MMFinderLiveHotSaleAnimationDelegate;

@interface MMFinderLiveHotSaleAnimationLogic : NSObject

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) unsigned long long lastCount;
@property (nonatomic) unsigned long long startPoint;
@property (nonatomic) BOOL isWaiting;
@property (nonatomic) BOOL isDuringFinishing;
@property (nonatomic) BOOL hasGotNewDataDuringFinishing;
@property (weak, nonatomic) id<MMFinderLiveHotSaleAnimationDelegate> delegate;
@property (nonatomic) unsigned long long sales;
@property (retain, nonatomic) NSMutableArray *salesHistory;
@property (retain, nonatomic) NSMutableArray *timeInfo;

+ (id)logicOf:(id)a0;

- (id)initWithDelegate:(id)a0;
- (void)tryStart;
- (void)process;
- (BOOL)shouldStartHotSellAnimation;
- (void).cxx_destruct;

@end
