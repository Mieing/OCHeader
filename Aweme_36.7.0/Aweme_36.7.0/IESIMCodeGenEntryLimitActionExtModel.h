@class NSString;

@interface IESIMCodeGenEntryLimitActionExtModel : AWEBaseDataModel

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *jumpSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
