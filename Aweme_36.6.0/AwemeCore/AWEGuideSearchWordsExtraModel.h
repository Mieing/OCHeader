@class NSString;

@interface AWEGuideSearchWordsExtraModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *hintText;
@property (nonatomic) unsigned long long guideSearchWordsType;
@property (copy, nonatomic) NSString *maskType;
@property (copy, nonatomic) NSString *imprExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
