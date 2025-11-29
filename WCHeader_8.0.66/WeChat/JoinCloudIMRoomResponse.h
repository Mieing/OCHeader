@class BaseResponse;

@interface JoinCloudIMRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long imroomid;

+ (void)initialize;

@end
