@class BaseRequest, NSString, StoryCommentDetail;

@interface StoryCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) StoryCommentDetail *commentDetail;
@property (retain, nonatomic) StoryCommentDetail *referCommentDetail;
@property (nonatomic) unsigned int previewEnterScene;
@property (nonatomic) unsigned int profileSource;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
