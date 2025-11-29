@class AWEIMLifeServiceChatMenuFunctionReplyModel, NSString, NSArray, AWEIMLifeServiceChatMenuFunctionJumpModel, AWEIMLifeServiceChatMenuAuditInfoModel;

@interface AWEIMLifeServiceChatMenuModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *menuItemID;
@property (nonatomic) long long menuItemType;
@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *itemSubtitle;
@property (copy, nonatomic) NSArray *subItemList;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuFunctionReplyModel *replyModel;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuFunctionJumpModel *jumpModel;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuAuditInfoModel *auditModel;
@property (nonatomic) long long operationSource;
@property (copy, nonatomic) NSString *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)jumpModelJSONTransformer;
+ (id)subItemListJSONTransformer;
+ (id)replyModelJSONTransformer;
+ (id)auditModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)toShortModel;
- (void).cxx_destruct;

@end
