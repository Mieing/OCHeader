@class NSString;

@interface AWEUserRateRemindInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *remindText;
@property (copy, nonatomic) NSString *detailLink;
@property (nonatomic) long long showDaysLimit;
@property (nonatomic) long long showDetailCountLimit;
@property (nonatomic) long long rateRecordId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
