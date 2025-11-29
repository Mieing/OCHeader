@class NSString;

@interface AWECodeGenWannaPreTabModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *button;
@property (copy, nonatomic) NSString *cancelButton;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
