@class NSString;

@interface MPPageCommentParam : MMObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long commentTopicId;
@property (nonatomic) BOOL isSubReply;
@property (nonatomic) unsigned int personalCommentId;
@property (copy, nonatomic) NSString *replyContent;

- (void).cxx_destruct;

@end
