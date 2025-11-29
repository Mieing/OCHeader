@class NSNumber;

@interface IESECLiveTextConfigModel : IESECLiveBaseElementConfigModel

@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (retain, nonatomic) NSNumber *fontScaleRatio;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
