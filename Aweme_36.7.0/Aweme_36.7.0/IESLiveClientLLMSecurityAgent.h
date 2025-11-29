@class NSString, NSDictionary, IESLiveClientLLMSecurityMonitor;
@protocol IESLiveClientAIService;

@interface IESLiveClientLLMSecurityAgent : NSObject <IESLiveClientLLMSecurityService>

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) IESLiveClientLLMSecurityMonitor *monitor;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *sceneModelName;
@property (copy, nonatomic) NSString *systemPrompt;
@property (copy, nonatomic) NSString *userPrompt;
@property (retain, nonatomic) NSDictionary *inferenceParams;
@property (nonatomic) BOOL enableSEISecurity;
@property (nonatomic) BOOL neverInfer;
@property (nonatomic) long long textIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

@end
