@class NSArray;

@interface CJPayAlogReportConfigModel : JSONModel

@property (nonatomic) BOOL reportEnable;
@property (nonatomic) long long reportTimeInterval;
@property (nonatomic) long long reportEnableInterval;
@property (copy, nonatomic) NSArray *eventWhiteList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
