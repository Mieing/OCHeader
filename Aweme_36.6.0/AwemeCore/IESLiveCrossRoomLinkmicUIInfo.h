@class NSMutableDictionary;

@interface IESLiveCrossRoomLinkmicUIInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *userInfos;
@property (readonly, nonatomic) unsigned long long userInfos_Count;

+ (id)descriptor;

@end
