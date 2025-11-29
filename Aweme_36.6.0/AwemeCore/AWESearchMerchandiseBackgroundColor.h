@class AWESearchMerchandiseHexColor;

@interface AWESearchMerchandiseBackgroundColor : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseHexColor *dark;
@property (retain, nonatomic) AWESearchMerchandiseHexColor *light;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
