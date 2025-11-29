@class NSString, HTSLiveTrayEffectMessage_Background, HTSLiveTrayEffectMessage_PriorityConfig, NSMutableDictionary, HTSLiveCommon, HTSLiveHighlightAreaPriorityConfig, HTSLiveCombinedText, HTSLiveTrayEffectMessage_DynamicConfig;

@interface HTSLiveTrayEffectMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *subScene;
@property (retain, nonatomic) HTSLiveCombinedText *content;
@property (nonatomic) BOOL hasContent;
@property (retain, nonatomic) HTSLiveTrayEffectMessage_Background *background;
@property (nonatomic) BOOL hasBackground;
@property (retain, nonatomic) HTSLiveTrayEffectMessage_DynamicConfig *dynamicConfig;
@property (nonatomic) BOOL hasDynamicConfig;
@property (retain, nonatomic) HTSLiveTrayEffectMessage_PriorityConfig *priorityConfig;
@property (nonatomic) BOOL hasPriorityConfig;
@property (retain, nonatomic) HTSLiveHighlightAreaPriorityConfig *highlightAreaPriorityConfig;
@property (nonatomic) BOOL hasHighlightAreaPriorityConfig;
@property (retain, nonatomic) NSMutableDictionary *eventParams;
@property (readonly, nonatomic) unsigned long long eventParams_Count;

+ (id)descriptor;

@end
