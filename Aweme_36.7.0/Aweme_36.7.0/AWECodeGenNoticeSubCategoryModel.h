@class NSString;

@interface AWECodeGenNoticeSubCategoryModel : AWEBaseDataModel

@property (nonatomic) int modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *traceParam;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
