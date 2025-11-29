@class NSString, NSMutableArray;

@interface HTSLiveRoomBattleProcessSelectGuestsContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *guestInfosArray;
@property (readonly, nonatomic) unsigned long long guestInfosArray_Count;
@property (copy, nonatomic) NSString *maxMember;

+ (id)descriptor;

@end
