@class MMListenCircleUserInfo, NSString, BaseResponse;

@interface MMListenCircleProfileResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenCircleUserInfo *userInfo;
@property (retain, nonatomic) NSString *tabDesc;
@property (retain, nonatomic) NSString *tag;

+ (void)initialize;

@end
