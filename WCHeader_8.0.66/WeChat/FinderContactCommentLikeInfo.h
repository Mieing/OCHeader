@class NSString;

@interface FinderContactCommentLikeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long commentId;
@property (nonatomic) unsigned long long likeId;
@property (retain, nonatomic) NSString *likeUsername;

+ (void)initialize;

@end
