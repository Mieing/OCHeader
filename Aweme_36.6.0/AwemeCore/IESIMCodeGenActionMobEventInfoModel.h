@class NSString, NSDictionary;

@interface IESIMCodeGenActionMobEventInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *eventParam;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
