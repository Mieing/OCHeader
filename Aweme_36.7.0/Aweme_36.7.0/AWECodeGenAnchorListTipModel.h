@class NSString;

@interface AWECodeGenAnchorListTipModel : AWEBaseDataModel

@property (nonatomic) BOOL isDisplayTip;
@property (copy, nonatomic) NSString *tipContent;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
