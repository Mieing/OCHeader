@class NSMutableArray;

@interface StopInteractionPluginResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *pluginStatsArray;
@property (readonly, nonatomic) unsigned long long pluginStatsArray_Count;

+ (id)descriptor;

@end
