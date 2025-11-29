@class NSString, BaseResponse;

@interface UpgradeChatRoomResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *chatRoomData;
@property (retain, nonatomic) NSString *resultMsg;
@property (nonatomic) unsigned int maxCount;
@property (nonatomic) unsigned int mobileQuota;
@property (nonatomic) unsigned int cardQuota;
@property (nonatomic) unsigned int donateQuota;
@property (nonatomic) unsigned int totalQuota;

+ (void)initialize;

@end
