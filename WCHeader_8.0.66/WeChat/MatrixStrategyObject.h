@class NSString, NSMutableArray;

@interface MatrixStrategyObject : NSObject

@property (copy, nonatomic) NSMutableArray *reportIDArray;
@property (copy, nonatomic) NSString *strategyName;

+ (id)loadReportID:(id)a0;

- (id)initWithStrategy:(id)a0;
- (id)getReportIDs;
- (void)addReportID:(id)a0;
- (void)saveReportIDs;
- (void).cxx_destruct;

@end
