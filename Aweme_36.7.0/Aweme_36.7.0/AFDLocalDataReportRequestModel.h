@class NSArray, NSDictionary, AFDLocalDataCenterTable;

@interface AFDLocalDataReportRequestModel : NSObject

@property (retain, nonatomic) AFDLocalDataCenterTable *table;
@property (copy, nonatomic) NSArray *modelsArray;
@property (copy, nonatomic) NSArray *jsonArray;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long currentTime;
@property (copy, nonatomic) NSDictionary *queryParam;
@property (nonatomic) BOOL isFrontier;

- (void).cxx_destruct;
- (id)init;

@end
