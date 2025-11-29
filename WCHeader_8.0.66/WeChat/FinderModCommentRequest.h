@class NSMutableArray;

@interface FinderModCommentRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) NSMutableArray *commentIds;

+ (void)initialize;

@end
