@class NSData, NSString, BaseResponse;

@interface MusicLiveJoinResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *cookie;
@property (retain, nonatomic) NSString *songid;

+ (void)initialize;

@end
