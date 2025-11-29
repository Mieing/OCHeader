@class AWESearchMerchandisePicConfigure, AWESearchMerchandiseTextConfig;

@interface AWESearchMerchandiseCardTitle : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseTextConfig *textConfig;
@property (retain, nonatomic) AWESearchMerchandisePicConfigure *picConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
