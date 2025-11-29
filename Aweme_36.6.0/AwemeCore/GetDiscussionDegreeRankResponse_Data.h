@class DiscussionDegreeRank, NSMutableArray, NSString;

@interface GetDiscussionDegreeRankResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (nonatomic) long long totalNum;
@property (retain, nonatomic) DiscussionDegreeRank *currentUser;
@property (nonatomic) BOOL hasCurrentUser;
@property (nonatomic) long long totalScore;
@property (copy, nonatomic) NSString *anchorRoomId;

+ (id)descriptor;

@end
