@class AWESearchMerchandiseTextConfig, AWESearchMerchandiseBackgroundColor, AWESearchMerchandisePicConfig;

@interface AWESearchMerchandiseBiddingInformation : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandisePicConfig *iconUrl;
@property (retain, nonatomic) AWESearchMerchandisePicConfig *bgImage;
@property (retain, nonatomic) AWESearchMerchandiseTextConfig *text;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundColor *bgColor;
@property (nonatomic) long long radius;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
