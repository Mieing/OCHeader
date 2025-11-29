@class NSString, NSDictionary, IESEffectModel, ACCAIGCLoraUgcPromptModel;

@interface APCDTOEditorAIGCEffectExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (nonatomic) BOOL isAIGCSync;
@property (copy, nonatomic) NSString *aigcType;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) ACCAIGCLoraUgcPromptModel *ugcPrompt;
@property (nonatomic) unsigned long long referenceType;
@property (retain, nonatomic) NSDictionary *passThroughTrackInfoDict;
@property (retain, nonatomic) NSString *loraResourceType;
@property (retain, nonatomic) NSDictionary *aigcUgcFusionParam;
@property (nonatomic) BOOL isFusionCreationToolsVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
