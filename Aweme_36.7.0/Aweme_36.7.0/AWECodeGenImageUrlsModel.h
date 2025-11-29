@class AWECodeGenUrlModel;

@interface AWECodeGenImageUrlsModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlFirstModel;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlSecondModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
