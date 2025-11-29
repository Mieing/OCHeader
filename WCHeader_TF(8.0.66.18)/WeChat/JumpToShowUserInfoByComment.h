@class NSString, FinderCommentInfo;

@interface JumpToShowUserInfoByComment : WXPBGeneratedMessage

@property (nonatomic) BOOL isSelfFeedComment;
@property (retain, nonatomic) FinderCommentInfo *commentInfo;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *nonceId;

+ (void)initialize;

@end
