@interface TSPKAPITimeModel : NSObject

@property (nonatomic) double customAPICallTime;
@property (nonatomic) double systemAPIBeginTime;
@property (nonatomic) double systemAPIEndTime;

- (double)systemAPICostTime;
- (double)customAPICostTime;
- (void)clear;

@end
