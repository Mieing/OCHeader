@class NSString;

@interface StopInteractionPluginResponse_PluginStats : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) int pluginType;
@property (nonatomic) long long duration;

+ (id)descriptor;

@end
