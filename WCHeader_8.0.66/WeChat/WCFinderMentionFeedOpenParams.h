@class NSArray, NSString, WCFinderDataItem, WCFinderJumpInfo;

@interface WCFinderMentionFeedOpenParams : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) BOOL showCommentList;
@property (nonatomic) unsigned long long refCommentID;
@property (nonatomic) unsigned long long replyCommentID;
@property (nonatomic) BOOL showFriendLike;
@property (copy, nonatomic) NSArray *friendUsernames;
@property (nonatomic) BOOL fromFirstLike;
@property (nonatomic) BOOL fromThankMention;
@property (retain, nonatomic) NSString *authorThankTips;
@property (retain, nonatomic) NSString *thankSharingTips;
@property (retain, nonatomic) WCFinderJumpInfo *enterShowJumpInfo;
@property (nonatomic) int customTLFollowEnterType;
@property (nonatomic) double enterTargetTimestamp;

- (id)initWithDataItem:(id)a0;
- (void)setCommentListShowWithRefCommentID:(unsigned long long)a0;
- (void)setFriendLikeShowWithFriendUsernames:(id)a0;
- (id)convertToMentionDetailVCPatamsWithScene:(int)a0;
- (void).cxx_destruct;

@end
