@class EcsErrorAction, NSString, BaseResponse;

@interface MmecB2CCheckSendAgainGiftResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EcsErrorAction *action;
@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned long long skuId;
@property (nonatomic) unsigned int productCnt;
@property (retain, nonatomic) NSString *shopAppid;
@property (nonatomic) unsigned long long activityId;

+ (void)initialize;

@end
