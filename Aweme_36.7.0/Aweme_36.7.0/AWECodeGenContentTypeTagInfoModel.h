@class NSString;

@interface AWECodeGenContentTypeTagInfoModel : AWEBaseDataModel

@property (nonatomic) long long tagId;
@property (copy, nonatomic) NSString *tagName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
