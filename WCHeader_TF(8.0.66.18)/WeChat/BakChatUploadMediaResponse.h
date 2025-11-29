@class NSString, BaseResponse;

@interface BakChatUploadMediaResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *bakChatClientId;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int maxLength;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *mediaId;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int cancelFlag;
@property (nonatomic) unsigned int bakChatSvrId;

+ (void)initialize;

@end
