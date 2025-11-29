@class NSData, NSString, MenuItem, RealNameInfo, CgiGetQrcodeUrlV2Resp_BottomEntrance, BaseResponse, ReceiveOptionInfo, ReceiveOptionSettingItem, NSMutableArray, QRActionInfo;

@interface CgiGetQrcodeUrlV2Resp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) RealNameInfo *realNameInfo;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int qrcodeLevel;
@property (retain, nonatomic) NSString *trueName;
@property (retain, nonatomic) NSMutableArray *upperRightItems;
@property (retain, nonatomic) MenuItem *bottomItem;
@property (retain, nonatomic) NSString *bottomLeftIconUrl;
@property (nonatomic) BOOL bottomRightArrowFlag;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *noticeUrl;
@property (retain, nonatomic) QRActionInfo *screenShotAction;
@property (retain, nonatomic) QRActionInfo *longPressAction;
@property (nonatomic) int saveQrcodeButtonAction;
@property (retain, nonatomic) NSData *saveNotifyInfo;
@property (nonatomic) unsigned int refreshUrlInterval;
@property (retain, nonatomic) CgiGetQrcodeUrlV2Resp_BottomEntrance *bottomEntrance;
@property (nonatomic) BOOL receiveOptionEntrance;
@property (retain, nonatomic) ReceiveOptionInfo *receiveOptionInfo;
@property (retain, nonatomic) ReceiveOptionSettingItem *receiveOptionSettingItem;
@property (retain, nonatomic) NSString *receiveSettingDesc;

+ (void)initialize;

@end
