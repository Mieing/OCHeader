@class NSString, HTSLiveImage, ProductInfo;

@interface GetPresetCardResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL hasSet;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *imageCache;
@property (nonatomic) BOOL hasImageCache;
@property (copy, nonatomic) NSString *titleCache;
@property (nonatomic) BOOL isProduct;
@property (retain, nonatomic) ProductInfo *productInfo;
@property (nonatomic) BOOL hasProductInfo;
@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) NSString *unComplianceToast;
@property (copy, nonatomic) NSString *rgb;
@property (copy, nonatomic) NSString *hsl;
@property (copy, nonatomic) NSString *wordRgb;
@property (copy, nonatomic) NSString *wordHsl;

+ (id)descriptor;

@end
