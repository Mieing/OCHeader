@class NSString, BaseResponse;

@interface FinderPostLiveMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *realnameUrl;
@property (nonatomic) unsigned int statusFlag;

+ (void)initialize;

@end
