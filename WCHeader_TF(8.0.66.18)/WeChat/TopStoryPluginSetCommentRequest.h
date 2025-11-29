@class NSString;

@interface TopStoryPluginSetCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSString *commentId;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *byPass;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
