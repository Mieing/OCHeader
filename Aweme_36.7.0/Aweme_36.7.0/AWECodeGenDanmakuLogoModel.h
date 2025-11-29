@class NSArray;

@interface AWECodeGenDanmakuLogoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *urlArray;
@property (nonatomic) int width;
@property (nonatomic) int height;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
