@class NSData, NSString, MenuItem, RealNameInfo, MiniProgramInfo, BaseResponse, NSMutableArray, QRActionInfo;

@interface CgiF2FQrcodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSMutableArray *upperRightItems;
@property (retain, nonatomic) MenuItem *bottomItem;
@property (retain, nonatomic) NSString *trueName;
@property (retain, nonatomic) NSString *bottomLeftIconUrl;
@property (nonatomic) BOOL bottomRightArrowFlag;
@property (nonatomic) unsigned int busiType;
@property (retain, nonatomic) NSString *upperWording;
@property (retain, nonatomic) NSString *mchName;
@property (retain, nonatomic) NSString *mchPhoto;
@property (nonatomic) unsigned int guideMaterialFlag;
@property (retain, nonatomic) MiniProgramInfo *buyMaterialInfo;
@property (retain, nonatomic) RealNameInfo *realNameInfo;
@property (nonatomic) unsigned int retcode;
@property (nonatomic) unsigned int qrcodeLevel;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *noticeUrl;
@property (retain, nonatomic) NSString *screenshotMaterialWording;
@property (retain, nonatomic) NSString *longpressMaterialWording;
@property (retain, nonatomic) NSString *saveqrcodeMaterialWording;
@property (retain, nonatomic) QRActionInfo *screenShotAction;
@property (retain, nonatomic) QRActionInfo *longPressAction;
@property (retain, nonatomic) QRActionInfo *saveQrcodeAction;
@property (retain, nonatomic) NSData *saveNotifyInfo;

+ (void)initialize;

@end
