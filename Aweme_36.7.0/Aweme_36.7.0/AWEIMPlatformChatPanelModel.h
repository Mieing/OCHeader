@class NSString, NSDictionary, AWEIMPlatformChatPanelBadgeModel;

@interface AWEIMPlatformChatPanelModel : MTLModel <MTLJSONSerializing, AWEIMStrategyConfigResponseCompactNodeProtocol>

@property (nonatomic) unsigned long long chatPanelType;
@property (copy, nonatomic) NSString *panelTitle;
@property (copy, nonatomic) NSString *panelIconUrlLight;
@property (copy, nonatomic) NSString *panelIconUrlDark;
@property (copy, nonatomic) NSString *panelBackgroundColorLight;
@property (copy, nonatomic) NSString *panelBackgroundColorDark;
@property (nonatomic) unsigned long long showStatus;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSDictionary *queryExt;
@property (nonatomic) BOOL needCheckAvailable;
@property (retain, nonatomic) AWEIMPlatformChatPanelBadgeModel *badge;
@property (retain, nonatomic) AWEIMPlatformChatPanelBadgeModel *plusPanelBadge;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *componentGroup;
@property (copy, nonatomic) NSString *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *nodeIndex;

+ (id)modelCustomPropertyMapper;
+ (id)badgeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)panelIconUrl;
- (id)panelBackgroundColor;
- (id)buildIndexNodeData;
- (void)clearIndexNodeData;
- (void)fillIndexNodeDataWithModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
