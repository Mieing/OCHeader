@class NSMutableDictionary, NSMutableArray, NSDate;

@interface AWEUserContextManagerShowMonitor : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSMutableArray *pageNames;
@property (retain, nonatomic) NSMutableDictionary *params;

- (id)showMonitorParamsWith:(id)a0 finished:(BOOL)a1 extDict:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
