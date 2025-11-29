@class NSString, StatusCommentMessageThumb;

@interface StatusComment : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *commentId;
@property (retain, nonatomic) NSString *statusId;
@property (nonatomic) long long createTimeMs;
@property (retain, nonatomic) NSString *commenterUsername;
@property (retain, nonatomic) NSString *writerUsername;
@property (retain, nonatomic) NSString *rootCommentId;
@property (retain, nonatomic) NSString *commentContent;
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL isNeedNotify;
@property (nonatomic) long long sequence;
@property (nonatomic) int state;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *headImageUrl;
@property (retain, nonatomic) StatusCommentMessageThumb *messageThumbData;

+ (void)initialize;

@end
