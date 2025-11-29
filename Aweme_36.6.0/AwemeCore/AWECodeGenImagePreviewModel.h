@class NSString;

@interface AWECodeGenImagePreviewModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *data;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *metaKey;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
