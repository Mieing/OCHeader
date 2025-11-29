@class JumpToShowUserInfoByMention, NSString, JumpToShowUserInfoByThumbUp, JumpToShowUserInfoByComment, JumpToShowUserInfoByFinderLike, JumpToShowUserInfoByMpComment;

@interface JumpToShowUserInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) JumpToShowUserInfoByComment *jumpToShowUserInfoByComment;
@property (retain, nonatomic) JumpToShowUserInfoByMention *jumpToShowUserInfoByMention;
@property (retain, nonatomic) JumpToShowUserInfoByThumbUp *jumpToShowUserInfoByThumbUp;
@property (retain, nonatomic) JumpToShowUserInfoByFinderLike *jumpToShowUserInfoByFinderLike;
@property (retain, nonatomic) JumpToShowUserInfoByMpComment *jumpToShowUserInfoByMpComment;

+ (void)initialize;

@end
