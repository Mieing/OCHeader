@class BaseResponse, NSString, NSData, FinderLiveGetPosterInfoResp_Pos, NSMutableArray, FinderLiveGetPosterInfoResp_Resource;

@interface FinderLiveGetPosterInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveGetPosterInfoResp_Resource *brandLogo;
@property (retain, nonatomic) NSMutableArray *sponsorLogoList;
@property (retain, nonatomic) FinderLiveGetPosterInfoResp_Resource *signatureLogo;
@property (retain, nonatomic) NSString *nicknameSuffix;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) FinderLiveGetPosterInfoResp_Resource *qrcodeCenterLogo;
@property (retain, nonatomic) FinderLiveGetPosterInfoResp_Pos *leftButton;
@property (retain, nonatomic) FinderLiveGetPosterInfoResp_Pos *rightTop;
@property (retain, nonatomic) NSString *qrcodeContent;
@property (nonatomic) unsigned int signatureRightPx;
@property (nonatomic) unsigned int signatureButtonPx;
@property (nonatomic) unsigned int verticalPixel;
@property (nonatomic) unsigned int horizontalPixel;
@property (retain, nonatomic) NSData *qrcode;

+ (void)initialize;

@end
