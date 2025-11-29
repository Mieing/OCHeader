@class AWETaskModel, AWEDTOAnchor, NSString, AWEDTOMission;

@interface AWEDTOCommerceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWETaskModel *task;
@property (retain, nonatomic) AWEDTOAnchor *anchor;
@property (retain, nonatomic) AWEDTOMission *mission;
@property (copy, nonatomic) NSString *nationalTaskEnterFrom;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long starAtlasOrderId;
@property (copy, nonatomic) NSString *relatedHotSentence;
@property (copy, nonatomic) NSString *sentenceId;
@property (copy, nonatomic) NSString *avatarDecorationId;
@property (copy, nonatomic) NSString *enterpriseMarketingToolsData;
@property (copy, nonatomic) NSString *eMarketingTool;
@property (copy, nonatomic) NSString *starAtlasExtra;
@property (nonatomic) long long starAtlasChannel;
@property (copy, nonatomic) NSString *douplusDraftId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorJSONTransformer;
+ (id)missionJSONTransformer;
+ (id)taskJSONTransformer;
+ (id)awe_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_draft;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
