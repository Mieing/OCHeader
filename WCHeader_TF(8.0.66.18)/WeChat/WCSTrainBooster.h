@class NSMutableDictionary, WCSTrainModelRoute;

@interface WCSTrainBooster : NSObject

@property (retain, nonatomic) WCSTrainModelRoute *entryRoute;
@property (retain, nonatomic) NSMutableDictionary *dicRoute;
@property (retain, nonatomic) NSMutableDictionary *dicRouteExt;

- (double)scoreByExtMode:(BOOL)a0 outLeafNodeKeys:(id)a1 features:(id)a2;
- (BOOL)applyCondition:(unsigned long long)a0 leftOperand:(double)a1 rightOperand:(double)a2;
- (double)passedHoursFromTimestamp:(unsigned int)a0;
- (void).cxx_destruct;

@end
