@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface AWEGoodsSKUCardSeckillInfoManager : NSObject

@property (retain, nonatomic) NSArray *goodsModels;
@property (nonatomic) double currentTime;
@property (nonatomic) double timeGap;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSMutableDictionary *states;
@property (nonatomic) unsigned long long currentShowIndex;

+ (long long)seckillStateForGoods:(id)a0 currentTime:(double)a1;
+ (id)seckillPriceForGoods:(id)a0;

- (void)updateCurrentTime:(double)a0;
- (void)setupDataWithModels:(id)a0;
- (long long)seckillStateForGoods:(id)a0;
- (id)timeTextForIndex:(unsigned long long)a0;
- (id)timeTextForForGoods:(id)a0;
- (id)initWithGoods:(id)a0;
- (long long)seckillStateForIndex:(unsigned long long)a0;
- (id)timeTextForCurrentShowIndex;
- (BOOL)inActivityForGoods:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupTimer;

@end
