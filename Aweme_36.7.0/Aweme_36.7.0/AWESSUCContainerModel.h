@class AWESSUCColorModel;

@interface AWESSUCContainerModel : AWEBaseApiModel

@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) AWESSUCColorModel *backgroundColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
