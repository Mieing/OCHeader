@class NSString;

@interface IESIMCodeGenGroupVisitIndicatorsModel : AWEBaseDataModel

@property (nonatomic) long long conversationShortId;
@property (nonatomic) int period;
@property (nonatomic) int visitMembers;
@property (nonatomic) int totalMembers;
@property (copy, nonatomic) NSString *visitRate;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
