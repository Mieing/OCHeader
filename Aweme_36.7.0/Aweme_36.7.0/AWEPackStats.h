@class NSString, NSDictionary, NSMutableDictionary, NSError;

@interface AWEPackStats : NSObject

@property (retain, nonatomic) NSString *scene;
@property (nonatomic) long long inputCount;
@property (nonatomic) long long outputCount;
@property (nonatomic) double beginTime;
@property (nonatomic) double finishTime;
@property (retain, nonatomic) NSString *executionType;
@property (nonatomic) double loadBeginTime;
@property (nonatomic) double loadFinishTime;
@property (retain, nonatomic) NSError *loadCoreError;
@property (retain, nonatomic) NSDictionary *loadErrors;
@property (retain, nonatomic) NSMutableDictionary *loadCosts;
@property (nonatomic) double filterAssembleBeginTime;
@property (nonatomic) double filterAssembleFinishTime;
@property (retain, nonatomic) NSDictionary *filterCosts;
@property (retain, nonatomic) NSDictionary *assembleCosts;
@property (retain, nonatomic) NSDictionary *filterReasons;
@property (retain, nonatomic) NSDictionary *trackExtra;

- (void).cxx_destruct;

@end
