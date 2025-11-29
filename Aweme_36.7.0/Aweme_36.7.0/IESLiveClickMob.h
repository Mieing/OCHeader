@class NSString, NSMutableDictionary;

@interface IESLiveClickMob : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *clickMobLogName;
@property (retain, nonatomic) NSMutableDictionary *clickMobLogParams;
@property (readonly, nonatomic) unsigned long long clickMobLogParams_Count;

+ (id)descriptor;

@end
