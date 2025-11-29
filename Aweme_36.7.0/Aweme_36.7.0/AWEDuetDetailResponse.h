@class AWEDuetDetailModel;

@interface AWEDuetDetailResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEDuetDetailModel *duetInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
