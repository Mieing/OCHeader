@class NSString, NSData, BaseResponse;

@interface GetFaceCheckActionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *personId;
@property (retain, nonatomic) NSString *actionData;
@property (nonatomic) float reductionRatio;
@property (retain, nonatomic) NSString *takeMessage;
@property (retain, nonatomic) NSString *actionHint;
@property (retain, nonatomic) NSString *colorData;
@property (retain, nonatomic) NSData *selectData;
@property (nonatomic) unsigned long long bioId;

+ (void)initialize;

@end
