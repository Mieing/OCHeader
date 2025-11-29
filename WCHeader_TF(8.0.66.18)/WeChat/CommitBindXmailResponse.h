@class NSString, BaseResponse;

@interface CommitBindXmailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *mailAddr;
@property (nonatomic) int mailRetCode;

+ (void)initialize;

@end
