@class NSString, NSMutableArray;

@interface HTSLiveInviteRoomInfo : IESLivePBBaseMessage

@property (nonatomic) long long inviterRoomId;
@property (nonatomic) long long liveRoomMode;
@property (nonatomic) long long userCount;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *userCountFuzzy;
@property (copy, nonatomic) NSString *scoreFuzzy;
@property (copy, nonatomic) NSString *roomDesc;
@property (copy, nonatomic) NSString *inviterRoomIdStr;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;

+ (id)descriptor;

@end
