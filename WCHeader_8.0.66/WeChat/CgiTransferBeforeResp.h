@class WarningNotice, NSString, RouteInfo, BaseResponse;

@interface CgiTransferBeforeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *maskTruename;
@property (retain, nonatomic) NSString *truenameExtend;
@property (nonatomic) BOOL isSupportAddress;
@property (retain, nonatomic) NSString *placeorderReserves;
@property (nonatomic) unsigned int amountRemindBit;
@property (retain, nonatomic) WarningNotice *notice;
@property (nonatomic) BOOL showReceiverAlias;
@property (retain, nonatomic) RouteInfo *rightNavigationItemRouteInfo;

+ (void)initialize;

@end
