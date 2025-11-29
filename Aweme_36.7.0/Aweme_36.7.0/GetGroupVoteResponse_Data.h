@class NSString, NSMutableArray;

@interface GetGroupVoteResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *groupVoteGiftsArray;
@property (readonly, nonatomic) unsigned long long groupVoteGiftsArray_Count;
@property (nonatomic) int status;
@property (nonatomic) BOOL showCombo;
@property (copy, nonatomic) NSString *playModId;
@property (nonatomic) long long playType;
@property (nonatomic) long long duration;
@property (nonatomic) long long startTime;
@property (nonatomic) long long serverTime;

+ (id)descriptor;

@end
