@class NSString;

@interface AWECodeGenRelatedItemTagInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) int sortIndex;
@property (nonatomic) int tag;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
