@class NSString, UIImage, AWEURLModel;

@interface AWEQRCodeStyleTemplateModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *backgroundStartColor;
@property (retain, nonatomic) NSString *backgroundEndColor;
@property (retain, nonatomic) NSString *qrCodeColor;
@property (retain, nonatomic) NSString *templateImageUrl;
@property (nonatomic) long long templateContentMode;
@property (retain, nonatomic) NSString *templateTrackEvent;
@property (retain, nonatomic) UIImage *templateImage;
@property (retain, nonatomic) AWEURLModel *backgroundImageUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
