@class NSString, NSMutableArray;

@interface HTSLiveLinkmicFollowEffectContent : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *fromUserId;
@property (retain, nonatomic) NSMutableArray *followInfosArray;
@property (readonly, nonatomic) unsigned long long followInfosArray_Count;

+ (id)descriptor;

@end
