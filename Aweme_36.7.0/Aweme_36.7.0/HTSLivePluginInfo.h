@class NSMutableDictionary;

@interface HTSLivePluginInfo : IESLivePBBaseMessage

@property (nonatomic) long long pluginId;
@property (retain, nonatomic) NSMutableDictionary *itemPotentialValueHint;
@property (readonly, nonatomic) unsigned long long itemPotentialValueHint_Count;

+ (id)descriptor;

@end
