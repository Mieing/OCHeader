@class NSString, IESIMCodeGenTagDisplayStyleModel;

@interface IESIMCodeGenTagLevelItemModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *levelKey;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) IESIMCodeGenTagDisplayStyleModel *styleModel;
@property (copy, nonatomic) NSString *ruleTitle;
@property (copy, nonatomic) NSString *ruleSubtitle;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *levelType;
@property (nonatomic) long long expire;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
