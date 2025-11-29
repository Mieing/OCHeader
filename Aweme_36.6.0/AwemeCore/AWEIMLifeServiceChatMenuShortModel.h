@class NSString, AWEIMLifeServiceChatMenuFunctionJumpModel, NSArray, AWEIMChatMenuActionModel;

@interface AWEIMLifeServiceChatMenuShortModel : MTLModel <MTLJSONSerializing, AWEIMStrategyConfigResponseCompactNodeProtocol>

@property (copy, nonatomic) NSString *menuItemID;
@property (nonatomic) long long menuItemType;
@property (copy, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuFunctionJumpModel *jumpModel;
@property (retain, nonatomic) AWEIMChatMenuActionModel *actionModel;
@property (copy, nonatomic) NSArray *subItemList;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *ext;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *componentGroup;
@property (copy, nonatomic) NSString *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *nodeIndex;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)actionModelJSONTransformer;
+ (id)jumpModelJSONTransformer;
+ (id)subItemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)buildIndexNodeData;
- (void)clearIndexNodeData;
- (void)fillIndexNodeDataWithModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
