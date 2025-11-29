@class HTSLiveEffectChestCard_User, NSString, HTSLiveChestCardInfo, NSMutableArray;

@interface HTSLiveEffectChestCard : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveEffectChestCard_User *fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (retain, nonatomic) NSMutableArray *toUsersArray;
@property (readonly, nonatomic) unsigned long long toUsersArray_Count;
@property (retain, nonatomic) HTSLiveChestCardInfo *cardInfo;
@property (nonatomic) BOOL hasCardInfo;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
