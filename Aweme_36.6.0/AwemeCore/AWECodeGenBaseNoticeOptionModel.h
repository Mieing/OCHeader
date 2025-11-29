@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenBaseNoticeOptionModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlModel;
@property (nonatomic) int group;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
