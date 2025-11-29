@class NSDictionary, NSString, NSArray;

@interface IESLiveStrategyCombineItemV2 : NSObject

@property (nonatomic) long long lastHitTimeStamp;
@property (retain, nonatomic) NSDictionary *characterIndexing;
@property (retain, nonatomic) NSString *rpnString;
@property (nonatomic) BOOL isHit;
@property (readonly, nonatomic) NSArray *characters;
@property (readonly) NSArray *factors;
@property (readonly, copy, nonatomic) NSString *cid;
@property (readonly, copy, nonatomic) NSString *combineOp;
@property (readonly, nonatomic) long long totalDuration;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *abKey;
@property (readonly, nonatomic) NSString *strategyId;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isPreciseExposure;
@property (readonly, nonatomic) BOOL useAnchorCharacter;

+ (id)characterWithInfo:(id)a0;
+ (id)factorWithInfo:(id)a0;

- (id)rpnOperator;
- (id)initWithCombineInfo:(id)a0 sid:(id)a1 isOnline:(BOOL)a2;
- (BOOL)hitTestWithDataCenter:(id)a0 anchorId:(id)a1 ts:(double)a2;
- (BOOL)hitTestWithDelegate:(id)a0 anchorId:(id)a1 ts:(double)a2;
- (id)getFactorByName:(id)a0;
- (void).cxx_destruct;
- (BOOL)hitTest;

@end
