@class NSString, MMListenLikeResponse_ToastInfo, BaseResponse;

@interface MMListenLikeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenLikeResponse_ToastInfo *toast;
@property (nonatomic) BOOL isCommendLike;
@property (retain, nonatomic) NSString *bgmListenId;

+ (void)initialize;

@end
