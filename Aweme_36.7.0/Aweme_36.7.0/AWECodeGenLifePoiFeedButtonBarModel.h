@class NSString, AWECodeGenLifePoiFeedButtonModel;

@interface AWECodeGenLifePoiFeedButtonBarModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWECodeGenLifePoiFeedButtonModel *buttonModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
