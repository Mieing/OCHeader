@class AWECodeGenSicilyUrlModel;

@interface AWECodeGenIndexImageModel : AWEBaseDataModel

@property (nonatomic) int index;
@property (retain, nonatomic) AWECodeGenSicilyUrlModel *imageModel;
@property (retain, nonatomic) AWECodeGenSicilyUrlModel *mediumImageModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
