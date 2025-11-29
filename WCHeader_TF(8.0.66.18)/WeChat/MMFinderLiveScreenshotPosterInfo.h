@class NSString, UIImage, MMFinderLiveScreenshotPosterImages, WCFinderContact;

@interface MMFinderLiveScreenshotPosterInfo : NSObject

@property (retain, nonatomic) MMFinderLiveScreenshotPosterImages *images;
@property (nonatomic) struct CGPoint { double x; double y; } topLeftCropPoint;
@property (nonatomic) struct CGPoint { double x; double y; } bottomRightCropPoint;
@property (nonatomic) double expectedScreenshotAspectRatio;
@property (retain, nonatomic) NSString *brandLogoUri;
@property (retain, nonatomic) NSString *sponsorLogoUri;
@property (retain, nonatomic) NSString *artistSignatureImageUri;
@property (nonatomic) double artistSignatureImageRightMargin;
@property (nonatomic) double artistSignatureImageBottomMargin;
@property (retain, nonatomic) UIImage *holderAvatar;
@property (retain, nonatomic) NSString *holderNickname;
@property (retain, nonatomic) NSString *holderNicknameSuffix;
@property (retain, nonatomic) NSString *posterDescription;
@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (retain, nonatomic) UIImage *qrCodeImage;
@property (retain, nonatomic) NSString *qrCodeImageUri;
@property (retain, nonatomic) NSString *qrCodeContent;
@property (retain, nonatomic) NSString *qrCodeCenterImageUri;
@property (readonly, nonatomic) BOOL cropAreaValid;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } cropAreaCenter;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cropAreaSize;

- (void).cxx_destruct;

@end
