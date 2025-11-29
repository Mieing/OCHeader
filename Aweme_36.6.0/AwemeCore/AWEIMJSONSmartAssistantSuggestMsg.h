@class NSString, AWEIMJSONSmartAssistantComponetInfo;

@interface AWEIMJSONSmartAssistantSuggestMsg : AWEBaseApiModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *question;
@property (nonatomic) long long questionID;
@property (nonatomic) long long knowledgeBaseID;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) long long suggestMsgID;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWEIMJSONSmartAssistantComponetInfo *componentInfo;
@property (copy, nonatomic) NSString *actionID;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *layerIconLight;
@property (copy, nonatomic) NSString *layerIconDark;
@property (copy, nonatomic) NSString *panelIconLight;
@property (copy, nonatomic) NSString *panelIconDark;

+ (id)componentInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
