@class NSString, BaseResponse;

@interface MmecGetPresentUserAttrResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *giverUsername;
@property (retain, nonatomic) NSString *receiveGroupId;
@property (nonatomic) unsigned int recipientType;
@property (nonatomic) unsigned int hasReply;
@property (retain, nonatomic) NSString *replyWording;
@property (retain, nonatomic) NSString *giverNickName;

+ (void)initialize;

@end
