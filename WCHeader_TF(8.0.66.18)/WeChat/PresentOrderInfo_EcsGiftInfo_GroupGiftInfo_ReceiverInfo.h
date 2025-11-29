@class NSString, EcsJumpInfo, PresentOrderInfo_EcsGiftInfo_StatusActionInfo;

@interface PresentOrderInfo_EcsGiftInfo_GroupGiftInfo_ReceiverInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *nameWording;
@property (retain, nonatomic) NSString *timeWording;
@property (retain, nonatomic) NSString *statusWording;
@property (retain, nonatomic) NSString *statusColor;
@property (nonatomic) unsigned long long orderId;
@property (retain, nonatomic) NSString *statusColorDark;
@property (retain, nonatomic) EcsJumpInfo *jumpinfo;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_StatusActionInfo *skuAction;

+ (void)initialize;

@end
