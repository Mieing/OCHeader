@class UIImage, NSString;

@interface EnhanceTranslatingImageCdnObject : NSObject

@property (retain, nonatomic) UIImage *captureImage;
@property (retain, nonatomic) UIImage *enhanceImage;
@property (retain, nonatomic) UIImage *translateImage;
@property (retain, nonatomic) NSString *captureImageCdnFiledId;
@property (retain, nonatomic) NSString *captureImageCdnAesKey;
@property (retain, nonatomic) NSString *enhanceImageCdnFiledId;
@property (retain, nonatomic) NSString *enhanceImageCdnAesKey;
@property (retain, nonatomic) NSString *translateImageCdnFiledId;
@property (retain, nonatomic) NSString *translateImageCdnAesKey;

- (void).cxx_destruct;

@end
