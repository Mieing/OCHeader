@class NSString, NSMutableDictionary;

@interface HTSLiveShowMob : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *showMobLogName;
@property (retain, nonatomic) NSMutableDictionary *showMobLogParams;
@property (readonly, nonatomic) unsigned long long showMobLogParams_Count;

+ (id)descriptor;

@end
