@class NSString;

@interface AWECodeGenPopupModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
