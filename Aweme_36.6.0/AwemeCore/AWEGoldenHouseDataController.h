@class NSNumber, NSMutableArray, AWEListDataController;

@interface AWEGoldenHouseDataController : AWEListDataController

@property (nonatomic) long long initFetchCount;
@property (nonatomic) long long pullType;
@property (retain, nonatomic) NSMutableArray *modelsArray;
@property (nonatomic) long long fetchCount;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) unsigned long long totalCount;
@property (retain, nonatomic) AWEListDataController *feedDataController;
@property (nonatomic) long long feedCount;
@property (retain, nonatomic) NSMutableArray *videosArray;
@property (nonatomic) long long replaceCount;

- (id)generateValidAwemeCacheModels:(id)a0;
- (BOOL)needRemoveLongVideo:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)fetchWithCompletion:(id /* block */)a0;
- (BOOL)isValidRequest;

@end
