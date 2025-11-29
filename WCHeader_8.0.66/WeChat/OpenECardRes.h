@class NSString, OpenSuccItem, InputMobileItem, PopItem, BaseResponse;

@interface OpenECardRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *rettext;
@property (retain, nonatomic) NSString *bindToken;
@property (retain, nonatomic) NSString *verifyMsgDesc;
@property (retain, nonatomic) PopItem *guideInfo;
@property (retain, nonatomic) OpenSuccItem *succTips;
@property (retain, nonatomic) InputMobileItem *inputTips;

+ (void)initialize;

@end
