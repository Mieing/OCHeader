@class NSString;

@interface AWECodeGenModuleItemModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *itemIcon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
