@class NSString;

@interface AWESearchAICopilotData : AWEBaseApiModel

@property (copy, nonatomic) NSString *deepThinkGenerationFinishTitle;
@property (copy, nonatomic) NSString *deepThinkGenerationTitle;
@property (copy, nonatomic) NSString *generationFinishTitle;
@property (copy, nonatomic) NSString *generationTitle;
@property (copy, nonatomic) NSString *logoDark;
@property (copy, nonatomic) NSString *logoLight;
@property (nonatomic) long long logoWidth;
@property (nonatomic) BOOL isFinished;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
