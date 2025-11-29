@class NSString;

@interface AFDBookDetailPageTabsInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) long long tabType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
