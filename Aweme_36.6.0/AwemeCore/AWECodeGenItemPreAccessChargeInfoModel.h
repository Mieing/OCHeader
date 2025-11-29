@class NSString, NSArray;

@interface AWECodeGenItemPreAccessChargeInfoModel : AWEBaseDataModel

@property (nonatomic) BOOL hasPaid;
@property (copy, nonatomic) NSString *brandId;
@property (copy, nonatomic) NSString *brandName;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSArray *showReportLinkArray;
@property (copy, nonatomic) NSArray *clickReportLinkArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
