@class NSString;

@interface TopStoryPluginPostCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *replyId;
@property (retain, nonatomic) NSString *subReplyId;
@property (retain, nonatomic) NSString *docUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) NSString *byPass;
@property (retain, nonatomic) NSString *vid;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
