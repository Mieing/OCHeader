@class NSString;

@interface IESIMCodeGenInterestGroupDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *interestTag;
@property (nonatomic) int applyType;
@property (copy, nonatomic) NSString *applyQuestion;
@property (copy, nonatomic) NSString *defaultSelfIntroduceTemplate;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
