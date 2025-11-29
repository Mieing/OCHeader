@class NSDictionary, NSMutableDictionary, NSArray;

@interface TMEntity : NSObject

@property (retain, nonatomic) NSMutableDictionary *componentsDic;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableDictionary *systemCostForReport;
@property (readonly, nonatomic) double totalCost;
@property (nonatomic) double preStart;
@property (nonatomic) double preEnd;
@property (nonatomic) double postStart;
@property (nonatomic) double postEnd;
@property (readonly, nonatomic) NSDictionary *systemCost;
@property (readonly, nonatomic) NSArray *components;
@property (nonatomic) unsigned long long fastPassType;

- (id)getComponent:(Class)a0;
- (BOOL)hasComponent:(Class)a0;
- (void)recordSystemCost:(double)a0 name:(id)a1;
- (void).cxx_destruct;
- (id)initWithComponent:(id)a0;
- (void)addComponent:(id)a0;

@end
