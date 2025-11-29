@class NSString, RemindWin, NSMutableArray, BaseResponse;

@interface TransferPhoneGetRcvrResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int invalid;
@property (retain, nonatomic) RemindWin *wxnameChgWin;
@property (retain, nonatomic) RemindWin *jumpWin;
@property (retain, nonatomic) NSString *rcvrOpenid;
@property (retain, nonatomic) NSString *rcvrToken;
@property (retain, nonatomic) NSString *wxName;
@property (retain, nonatomic) NSString *realName;
@property (retain, nonatomic) NSString *phone;
@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) unsigned int amountRemindBit;
@property (retain, nonatomic) NSMutableArray *delayOptions;
@property (retain, nonatomic) NSString *checkNameWording;
@property (retain, nonatomic) NSString *checkNameMask;
@property (retain, nonatomic) NSString *getRcvrExt;
@property (retain, nonatomic) NSString *timestampMs;

+ (void)initialize;

@end
