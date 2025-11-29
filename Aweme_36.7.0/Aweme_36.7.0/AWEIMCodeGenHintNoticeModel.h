@class NSString, NSDictionary;

@interface AWEIMCodeGenHintNoticeModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *template;
@property (copy, nonatomic) NSDictionary *highlightStructMap;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
