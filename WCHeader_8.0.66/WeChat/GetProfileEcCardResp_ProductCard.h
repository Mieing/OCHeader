@class NSString, EcProductCard, EcRgbaTagMsg;

@interface GetProfileEcCardResp_ProductCard : WXPBGeneratedMessage

@property (retain, nonatomic) EcProductCard *card;
@property (retain, nonatomic) EcRgbaTagMsg *recommendReason;
@property (retain, nonatomic) NSString *evalutionLabelWording;

+ (void)initialize;

@end
