@class NSString, AWEIMSmartAssistantComponetInfo;

@interface AWEIMSmartAssistantSuggestMsg : GPBMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (copy, nonatomic) NSString *question;
@property (nonatomic) BOOL hasQuestion;
@property (nonatomic) long long questionId;
@property (nonatomic) BOOL hasQuestionId;
@property (nonatomic) long long knowledgeBaseId;
@property (nonatomic) BOOL hasKnowledgeBaseId;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) AWEIMSmartAssistantComponetInfo *componentInfo;
@property (nonatomic) BOOL hasComponentInfo;
@property (copy, nonatomic) NSString *actionId;
@property (nonatomic) BOOL hasActionId;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSString *layerIconDark;
@property (nonatomic) BOOL hasLayerIconDark;
@property (copy, nonatomic) NSString *layerIconLight;
@property (nonatomic) BOOL hasLayerIconLight;
@property (copy, nonatomic) NSString *panelIconDark;
@property (nonatomic) BOOL hasPanelIconDark;
@property (copy, nonatomic) NSString *panelIconLight;
@property (nonatomic) BOOL hasPanelIconLight;

+ (id)descriptor;

@end
