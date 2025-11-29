@class NSString, NSArray, AWEIMCodeGenHintNoticeModel;

@interface IESIMCodeGenGroupActionCheckActiveFilteredPopupModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *groupActiveRulesModelArray;
@property (nonatomic) long long exemptCount;
@property (retain, nonatomic) AWEIMCodeGenHintNoticeModel *confirmCreateHintMsgModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
