@class IBeaconNotification, BaseResponse;

@interface IBeaconBoardcastResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) IBeaconNotification *notification;

+ (void)initialize;

@end
