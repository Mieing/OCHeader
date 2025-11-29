@class NSString, AiImageInfoList, BaseResponse;

@interface AiGenPicResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) AiImageInfoList *aiImageList;
@property (nonatomic) unsigned int agreeAppPoster;

+ (void)initialize;

@end
