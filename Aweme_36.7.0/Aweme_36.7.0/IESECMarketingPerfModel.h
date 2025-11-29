@class NSArray, NSString;

@interface IESECMarketingPerfModel : NSObject

@property (copy, nonatomic) NSArray *resourceSlots;
@property (copy, nonatomic) NSString *storage;
@property (nonatomic) double openTime;
@property (nonatomic) double firstScreenTime;
@property (nonatomic) double registerTime;
@property (nonatomic) double registerAction;
@property (nonatomic) double showAction;
@property (nonatomic) double networkStartTime;
@property (nonatomic) double networkEndTime;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) long long hitCache;

- (id)toParamsDictionary;
- (void).cxx_destruct;

@end
