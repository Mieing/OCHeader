@class NSString, BaseResponse;

@interface GetAdRedpktReceiveUriResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *coverName;
@property (retain, nonatomic) NSString *coverPictureUrl;
@property (nonatomic) BOOL empty;
@property (nonatomic) BOOL hasReceived;
@property (nonatomic) unsigned long long receiveExpiredTime;
@property (nonatomic) unsigned long long receiveBeginTime;
@property (nonatomic) BOOL invalid;

+ (void)initialize;

@end
