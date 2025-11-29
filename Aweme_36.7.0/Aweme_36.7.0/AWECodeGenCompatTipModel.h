@class NSString;

@interface AWECodeGenCompatTipModel : AWEBaseDataModel

@property (nonatomic) BOOL showCompatTip;
@property (copy, nonatomic) NSString *toastText;
@property (nonatomic) BOOL cellNoJump;
@property (copy, nonatomic) NSString *avatarText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
