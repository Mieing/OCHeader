@class NSString, AWESearchMerchandiseBackgroundGradient, AWESearchMerchandiseBackgroundColor;

@interface AWESearchMerchandiseBackgroundConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *backgroundType;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundGradient *gradient;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundColor *color;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
