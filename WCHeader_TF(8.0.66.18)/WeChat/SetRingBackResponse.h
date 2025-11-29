@class RingBackTextStatusInfo, BaseResponse;

@interface SetRingBackResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) RingBackTextStatusInfo *textStatusInfo;

+ (void)initialize;

@end
