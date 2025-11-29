@class JumpItem, NSString, NSMutableArray, BaseResponse;

@interface TransferPhoneSuccPageResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int delayCode;
@property (retain, nonatomic) NSMutableArray *wording;
@property (retain, nonatomic) JumpItem *announcement;

+ (void)initialize;

@end
