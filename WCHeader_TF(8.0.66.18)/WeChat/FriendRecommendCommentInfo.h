@class NSMutableArray;

@interface FriendRecommendCommentInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *exposeFriends;
@property (nonatomic) unsigned int friendCount;
@property (nonatomic) unsigned long long refCommentId;
@property (retain, nonatomic) NSMutableArray *myRecommendedCommentList;

+ (void)initialize;

- (void)setMyRecommendedCommentList:(id)a0;
- (id)myRecommendedCommentList;
- (void)setRefCommentId:(unsigned long long)a0;
- (unsigned long long)refCommentId;
- (void)setFriendCount:(unsigned int)a0;
- (unsigned int)friendCount;
- (void)setExposeFriends:(id)a0;
- (id)exposeFriends;

@end
