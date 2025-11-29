@class NSMutableDictionary;

@interface HTSLiveTopEffectMessage_Extra : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) unsigned long long params_Count;

+ (id)descriptor;

@end
