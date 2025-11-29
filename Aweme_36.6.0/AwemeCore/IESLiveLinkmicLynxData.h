@class NSMutableDictionary;

@interface IESLiveLinkmicLynxData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *userInfos;
@property (readonly, nonatomic) unsigned long long userInfos_Count;

+ (id)descriptor;

@end
