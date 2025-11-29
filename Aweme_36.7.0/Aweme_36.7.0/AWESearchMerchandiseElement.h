@class NSString, AWESearchMerchandiseTextConfig, AWESearchMerchandisePicConfig;

@interface AWESearchMerchandiseElement : AWEBaseApiModel

@property (copy, nonatomic) NSString *elementName;
@property (retain, nonatomic) AWESearchMerchandisePicConfig *picConfig;
@property (retain, nonatomic) AWESearchMerchandiseTextConfig *textConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
