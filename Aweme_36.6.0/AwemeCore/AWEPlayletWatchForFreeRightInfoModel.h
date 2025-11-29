@class NSArray;

@interface AWEPlayletWatchForFreeRightInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL hasRight;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSArray *rightSourcesArray;

- (id)initWithJsonStr:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
