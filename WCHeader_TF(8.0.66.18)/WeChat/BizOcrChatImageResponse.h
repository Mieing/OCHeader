@class NSString, BaseResponse;

@interface BizOcrChatImageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *jsonStr;
@property (retain, nonatomic) NSString *reqKey;
@property (nonatomic) BOOL isContentEmpty;
@property (nonatomic) unsigned long long sessionid64;
@property (nonatomic) unsigned int seqNum;

+ (void)initialize;

@end
