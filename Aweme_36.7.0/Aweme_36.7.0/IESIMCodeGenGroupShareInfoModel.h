@class NSString;

@interface IESIMCodeGenGroupShareInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *shareLinkDesc;
@property (nonatomic) long long shareLinkType;
@property (nonatomic) BOOL showShareLinkButton;
@property (nonatomic) BOOL test;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
