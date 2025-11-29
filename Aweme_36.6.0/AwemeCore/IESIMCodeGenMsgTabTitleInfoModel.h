@class NSString, IESIMCodeGenShowTipsModel;

@interface IESIMCodeGenMsgTabTitleInfoModel : AWEBaseDataModel

@property (nonatomic) long long msgTabType;
@property (retain, nonatomic) IESIMCodeGenShowTipsModel *topTitleModel;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
