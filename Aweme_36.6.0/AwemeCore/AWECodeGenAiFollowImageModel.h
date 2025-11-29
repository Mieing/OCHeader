@class NSString;

@interface AWECodeGenAiFollowImageModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *originalUri;
@property (copy, nonatomic) NSString *effectId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
