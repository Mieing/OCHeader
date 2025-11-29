@class NSString;

@interface AWECodeGenRelatedVideoInfoModel : AWEBaseDataModel

@property (nonatomic) long long relatedType;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *title;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
