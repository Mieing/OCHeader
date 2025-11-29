@class NSArray;

@interface AWECodeGenBannerCardCoverModel : AWEBaseDataModel

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (copy, nonatomic) NSArray *urlArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
