@class PopupItem, NSString, TimeItem, AccountStatusItem, BaseResponse;

@interface QrySettingResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *mainTitleWording;
@property (retain, nonatomic) NSString *subtitleWording;
@property (retain, nonatomic) AccountStatusItem *accountStatusItem;
@property (retain, nonatomic) TimeItem *timeItem;
@property (retain, nonatomic) PopupItem *popupItem;
@property (retain, nonatomic) NSString *closeTipsWording;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
