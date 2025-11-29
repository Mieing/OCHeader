@class NSString, MMListenUniCommentBypassMessage_ClientInfo, NSData, MMListenUniCommentBypassMessage_JumpInfo;

@interface MMListenUniCommentBypassMessage : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *topicName;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) int listenItemType;
@property (nonatomic) int categoryItemType;
@property (retain, nonatomic) MMListenUniCommentBypassMessage_ClientInfo *clientInfo;
@property (retain, nonatomic) NSData *clientInfoBuffer;
@property (retain, nonatomic) MMListenUniCommentBypassMessage_JumpInfo *jumpInfo;

+ (void)initialize;

@end
