@class NSData;

@interface SimMobileLogicResp : WXPBGeneratedMessage

@property (nonatomic) int logicRet;
@property (retain, nonatomic) NSData *errmsg;
@property (nonatomic) int forbidRetry;

+ (void)initialize;

@end
