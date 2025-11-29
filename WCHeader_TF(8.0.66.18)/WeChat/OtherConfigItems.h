@class NSString, FinderLiveQRCodePosterStyles;

@interface OtherConfigItems : WXPBGeneratedMessage

@property (nonatomic) unsigned int sensitiveWordNumberLimit;
@property (retain, nonatomic) FinderLiveQRCodePosterStyles *qrcodePosterStyles;
@property (nonatomic) BOOL enableDescExtend;
@property (nonatomic) unsigned long long createLivePrepareSwitchFlag;
@property (retain, nonatomic) NSString *realnameAuthUrl;

+ (void)initialize;

@end
