@class AWEIMLifeServiceChatMenuReplyTextModel, NSString, AWEIMLifeServiceChatMenuReplyImageModel, AWEIMLifeServiceChatMenuReplyGroupInviteCardtModel, AWEIMLifeServiceChatMenuReplyItemModel;

@interface AWEIMLifeServiceChatMenuFunctionReplyModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMLifeServiceChatMenuReplyImageModel *image;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuReplyTextModel *text;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuReplyGroupInviteCardtModel *groupInviteCard;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuReplyItemModel *item;
@property (copy, nonatomic) NSString *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemJSONTransformer;
+ (id)imageJSONTransformer;
+ (id)modelCustomPropertyMapper;
+ (id)groupInviteCardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (void).cxx_destruct;

@end
