@class NSArray, NSDictionary, AFDLocalDataCenterTable;

@interface AFDLocalDataCompensateRequestModel : NSObject

@property (retain, nonatomic) AFDLocalDataCenterTable *table;
@property (copy, nonatomic) NSArray *userIDs;
@property (copy, nonatomic) NSArray *secUids;
@property (copy, nonatomic) NSDictionary *queryParam;
@property (retain, nonatomic) NSArray *tableNames;
@property (nonatomic) BOOL needMemoryData;
@property (copy, nonatomic) NSDictionary *reportModels;
@property (nonatomic) long long maxCount;

- (void).cxx_destruct;
- (id)init;

@end
