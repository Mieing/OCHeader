@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenImageInfoModel : AWEBaseDataModel

@property (nonatomic) int height;
@property (nonatomic) int width;
@property (retain, nonatomic) AWECodeGenUrlModel *labelLargeModel;
@property (retain, nonatomic) AWECodeGenUrlModel *labelThumbModel;
@property (copy, nonatomic) NSString *title;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
