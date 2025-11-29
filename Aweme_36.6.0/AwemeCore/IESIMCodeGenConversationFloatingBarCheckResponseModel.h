@class NSDictionary;

@interface IESIMCodeGenConversationFloatingBarCheckResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSDictionary *barShowMap;
@property (copy, nonatomic) NSDictionary *userBarData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
