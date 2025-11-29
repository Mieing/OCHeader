@class NSString, NSDictionary;

@interface IESIMGroupHintNoticeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *templateString;
@property (retain, nonatomic) NSDictionary *highlightStructDic;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
