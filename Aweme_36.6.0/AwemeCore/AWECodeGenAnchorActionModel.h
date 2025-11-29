@class NSString, AWECodeGenAnchorDetailPageInfoModel;

@interface AWECodeGenAnchorActionModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long schemaType;
@property (retain, nonatomic) AWECodeGenAnchorDetailPageInfoModel *detailPageInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
