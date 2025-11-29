@class FriendRecommendCommentInfo, NSString, NSMutableOrderedSet;

@interface WCFinderFeedFriendRecommendCommentModel : NSObject

@property (retain, nonatomic) FriendRecommendCommentInfo *commentInfo;
@property (nonatomic) unsigned long long finderObjectCacheTime;
@property (retain, nonatomic) NSMutableOrderedSet *myRecommendCommnetIDSet;
@property (retain, nonatomic) NSString *cacheDisplayDesc;

- (id)initWithDataItem:(id)a0;
- (void)updateDataItem:(id)a0;
- (BOOL)changeRecommendWithCommentID:(unsigned long long)a0 action:(unsigned long long)a1;
- (BOOL)canShowFriendRecommendComment;
- (unsigned long long)refCommentID;
- (BOOL)checkTextViewOverMaxWidth:(double)a0 content:(id)a1 font:(id)a2;
- (unsigned long long)friendRecommendCount;
- (id)displayUsername;
- (id)displayDescWithWidth:(double)a0 font:(id)a1;
- (id)getDisplayDescWithDisplayName:(id)a0 recommendCount:(unsigned long long)a1;
- (void).cxx_destruct;

@end
