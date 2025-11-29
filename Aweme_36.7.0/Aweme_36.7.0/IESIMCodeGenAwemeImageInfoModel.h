@class IESIMCodeGenAwemeUrlModel, NSString;

@interface IESIMCodeGenAwemeImageInfoModel : AWEBaseDataModel

@property (nonatomic) int height;
@property (nonatomic) int width;
@property (retain, nonatomic) IESIMCodeGenAwemeUrlModel *labelLargeModel;
@property (retain, nonatomic) IESIMCodeGenAwemeUrlModel *labelThumbModel;
@property (copy, nonatomic) NSString *title;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
