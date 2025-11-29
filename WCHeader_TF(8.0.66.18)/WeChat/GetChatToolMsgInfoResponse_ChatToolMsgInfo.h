@class NSString;

@interface GetChatToolMsgInfoResponse_ChatToolMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *shareKey;
@property (nonatomic) int retcode;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *contentColor;
@property (nonatomic) int updatePeroid;
@property (nonatomic) int state;

+ (void)initialize;

@end
