@class NSString, AWECodeGenUserModel;

@interface AWECodeGenNoticeButtonModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonSchema;
@property (nonatomic) int buttonColorStyle;
@property (nonatomic) int buttonType;
@property (retain, nonatomic) AWECodeGenUserModel *userModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
