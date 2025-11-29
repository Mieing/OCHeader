@class NSString;

@interface HTSLiveInteractionPluginGamePlusContainerData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *miniAppId;
@property (copy, nonatomic) NSString *taskData;

+ (id)descriptor;

@end
