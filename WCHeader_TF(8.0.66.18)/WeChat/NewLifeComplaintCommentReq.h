@class FinderCommentInfo;

@interface NewLifeComplaintCommentReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderCommentInfo *comment;
@property (nonatomic) unsigned long long feedId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
