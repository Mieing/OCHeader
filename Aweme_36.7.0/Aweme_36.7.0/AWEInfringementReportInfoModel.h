@class NSString;

@interface AWEInfringementReportInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *infringementReportId;
@property (copy, nonatomic) NSString *remindText;
@property (copy, nonatomic) NSString *detailLink;
@property (nonatomic) long long showDaysLimit;
@property (nonatomic) long long showDetailCountLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
