@class NSString;

@interface AWECodeGenSelectAiBarInfoV2Model : AWEBaseDataModel

@property (copy, nonatomic) NSString *barId;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *clientExtra;
@property (copy, nonatomic) NSString *lynxExtra;
@property (copy, nonatomic) NSString *name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
