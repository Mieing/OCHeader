@class NSString, BaseResponse;

@interface ExitTrackRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int isRoomDestroyed;

+ (void)initialize;

@end
