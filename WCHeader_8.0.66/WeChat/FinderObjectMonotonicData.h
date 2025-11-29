@class FinderObjectMonotonicData_ChatRoomPushFlag, FinderObjectMonotonicData_ThumbUpFlag, FinderObjectMonotonicData_GlobalFavCount, FinderObjectMonotonicData_CommentInfo, FinderObjectMonotonicData_GlobalFavFlag, FinderObjectMonotonicData_ThankChatRoomPushFlag, FinderObjectMonotonicData_ChatRoomPushCount, FinderObjectCountInfo, FinderObjectMonotonicData_FollowPostCount, FinderObjectMonotonicData_CommentCount, FinderObjectMonotonicData_ThumbUpCount, FinderObjectMonotonicData_LiveIndependentData;

@interface FinderObjectMonotonicData : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObjectCountInfo *countInfo;
@property (retain, nonatomic) FinderObjectMonotonicData_CommentCount *commentCount;
@property (retain, nonatomic) FinderObjectMonotonicData_GlobalFavCount *globalFavCount;
@property (retain, nonatomic) FinderObjectMonotonicData_GlobalFavFlag *globalFavFlag;
@property (retain, nonatomic) FinderObjectMonotonicData_ThumbUpCount *thumbUpCount;
@property (retain, nonatomic) FinderObjectMonotonicData_ThumbUpFlag *thumbUpFlag;
@property (retain, nonatomic) FinderObjectMonotonicData_ChatRoomPushCount *chatroomPushCount;
@property (retain, nonatomic) FinderObjectMonotonicData_ChatRoomPushFlag *chatroomPushFlag;
@property (retain, nonatomic) FinderObjectMonotonicData_ThankChatRoomPushFlag *thankChatroomPushFlag;
@property (retain, nonatomic) FinderObjectMonotonicData_FollowPostCount *followPostCount;
@property (retain, nonatomic) FinderObjectMonotonicData_LiveIndependentData *liveIndependentData;
@property (retain, nonatomic) FinderObjectMonotonicData_CommentInfo *commentInfo;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setCommentInfo:(id)a0;
- (id)commentInfo;
- (void)setLiveIndependentData:(id)a0;
- (id)liveIndependentData;
- (void)setFollowPostCount:(id)a0;
- (id)followPostCount;
- (void)setThankChatroomPushFlag:(id)a0;
- (id)thankChatroomPushFlag;
- (void)setChatroomPushFlag:(id)a0;
- (id)chatroomPushFlag;
- (void)setChatroomPushCount:(id)a0;
- (id)chatroomPushCount;
- (void)setThumbUpFlag:(id)a0;
- (id)thumbUpFlag;
- (void)setThumbUpCount:(id)a0;
- (id)thumbUpCount;
- (void)setGlobalFavFlag:(id)a0;
- (id)globalFavFlag;
- (void)setGlobalFavCount:(id)a0;
- (id)globalFavCount;
- (void)setCommentCount:(id)a0;
- (id)commentCount;
- (void)setCountInfo:(id)a0;
- (id)countInfo;
- (id)archivedWCTValue;

@end
