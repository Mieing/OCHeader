@class NSString;

@interface AWECodeGenOriginalLanguageInfoModel : AWEBaseDataModel

@property (nonatomic) BOOL canTranslateRealtime;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) int languageId;
@property (copy, nonatomic) NSString *lang;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
