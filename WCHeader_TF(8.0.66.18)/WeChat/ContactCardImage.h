@class UIImage, NSString, CardImgItemInfo;

@interface ContactCardImage : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *imagePath;
@property (retain, nonatomic) CardImgItemInfo *cardItem;

+ (id)cardImageWithImage:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
