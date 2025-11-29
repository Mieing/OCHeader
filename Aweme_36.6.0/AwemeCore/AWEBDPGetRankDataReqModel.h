@class NSNumber, NSString;

@interface AWEBDPGetRankDataReqModel : NSObject

@property (copy, nonatomic) NSNumber *pageNum;
@property (copy, nonatomic) NSNumber *pageSize;
@property (copy, nonatomic) NSNumber *dataType;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *zoneId;
@property (copy, nonatomic) NSString *rankType;
@property (copy, nonatomic) NSString *relationType;

- (id)numberOfRankType;
- (id)numberOfRelationType;
- (void).cxx_destruct;

@end
