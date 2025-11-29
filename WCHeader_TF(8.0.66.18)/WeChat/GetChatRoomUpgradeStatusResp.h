@class NSString, BaseResponse;

@interface GetChatRoomUpgradeStatusResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int mobileQuota;
@property (nonatomic) unsigned int cardQuota;
@property (nonatomic) unsigned int donateQuota;
@property (nonatomic) unsigned int maxCount;
@property (retain, nonatomic) NSString *resultMsg;
@property (nonatomic) unsigned int totalQuota;

+ (void)initialize;

@end
