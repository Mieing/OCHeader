@class NSData, NSString, BaseResponse;

@interface GetPassKeyUserInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *passKeyUserId;
@property (retain, nonatomic) NSString *passKeyUserName;
@property (retain, nonatomic) NSString *verifyId;

+ (void)initialize;

@end
