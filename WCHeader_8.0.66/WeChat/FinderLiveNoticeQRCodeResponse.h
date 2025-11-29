@class NSData, NSString, FinderLiveNoticeInfo, FinderLiveNoticeQRCodeResponse_FunctionSwitch, BaseResponse, NSMutableArray, FinderLiveQRCodePosterStyles, FinderLiveNoticeQRCodeResponse_PersonalColumnInfo;

@interface FinderLiveNoticeQRCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (retain, nonatomic) NSData *qrcode;
@property (retain, nonatomic) NSString *qrcodeurl;
@property (retain, nonatomic) NSString *bgImgUrl;
@property (nonatomic) unsigned int isSpamModPic;
@property (retain, nonatomic) NSMutableArray *qrcodes;
@property (retain, nonatomic) FinderLiveQRCodePosterStyles *qrcodePosterStyles;
@property (nonatomic) unsigned int currentStyleId;
@property (retain, nonatomic) FinderLiveNoticeQRCodeResponse_PersonalColumnInfo *personalColumnInfo;
@property (nonatomic) unsigned int modifyEntranceStatus;
@property (nonatomic) BOOL enableDescExtend;
@property (retain, nonatomic) FinderLiveNoticeQRCodeResponse_FunctionSwitch *functionSwitch;

+ (void)initialize;

@end
