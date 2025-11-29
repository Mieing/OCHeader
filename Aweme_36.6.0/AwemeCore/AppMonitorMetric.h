@class AppMonitorDimensionSet, NSString, AppMonitorMeasureSet, NSDictionary, NSLock;

@interface AppMonitorMetric : NSObject <NSCopying>

@property (retain, nonatomic) NSString *transactionId;
@property (retain, nonatomic) NSString *module;
@property (retain, nonatomic) NSString *monitorPoint;
@property BOOL isDetail;
@property (retain, nonatomic) AppMonitorDimensionSet *dimensionSet;
@property (retain, nonatomic) AppMonitorMeasureSet *measureSet;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (id)initWithModule:(id)a0 monitorPoint:(id)a1 extraInfo:(id)a2 measureSet:(id)a3 dimensionSet:(id)a4;
- (id)initWithModule:(id)a0 monitorPoint:(id)a1 extraInfo:(id)a2 measureSet:(id)a3;
- (id)initWithModule:(id)a0 monitorPoint:(id)a1 extraInfo:(id)a2;
- (void)setisDetail:(BOOL)a0;
- (BOOL)getisDetail;
- (id)initWithModule:(id)a0 monitorPoint:(id)a1 measureSet:(id)a2 dimensionSet:(id)a3;
- (id)initWithModule:(id)a0 monitorPoint:(id)a1 measureSet:(id)a2;
- (id)initWithModule:(id)a0 monitorPoint:(id)a1;
- (BOOL)validWithDimensionValueSet:(id)a0 MeasureValueSet:(id)a1;
- (void)resetTransactionId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
