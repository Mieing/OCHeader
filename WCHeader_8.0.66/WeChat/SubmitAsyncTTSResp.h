@class NSData, BaseResponse;

@interface SubmitAsyncTTSResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL hasUnknowCharacter;
@property (retain, nonatomic) NSData *contextBuff;

+ (void)initialize;

@end
