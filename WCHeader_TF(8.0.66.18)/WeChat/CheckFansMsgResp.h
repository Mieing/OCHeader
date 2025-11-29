@class NSString, BaseResponse;

@interface CheckFansMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL ban;
@property (retain, nonatomic) NSString *wording;

+ (void)initialize;

@end
