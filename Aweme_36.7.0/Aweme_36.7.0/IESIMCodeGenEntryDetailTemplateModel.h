@class NSString, NSDictionary;

@interface IESIMCodeGenEntryDetailTemplateModel : AWEBaseDataModel

@property (nonatomic) int key;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
