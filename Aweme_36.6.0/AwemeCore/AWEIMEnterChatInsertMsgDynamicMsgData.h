@class AWEIMEnterChatInsertMsgDynamicPatchModel, NSString, NSDictionary, AWEIMEnterChatInsertMsgUIInfo;

@interface AWEIMEnterChatInsertMsgDynamicMsgData : AWEBaseApiModel <IESIMActionInfoProtocol>

@property (readonly, nonatomic) AWEIMEnterChatInsertMsgDynamicPatchModel *dynamicPatchModel;
@property (readonly, nonatomic) AWEIMEnterChatInsertMsgUIInfo *uiInfo;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int platform;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, nonatomic) NSDictionary *extData;
@property (readonly, nonatomic) BOOL isV2;
@property (readonly, nonatomic) int actionInfoType;
@property (readonly, copy, nonatomic) NSString *actionContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uiInfoJSONTransformer;
+ (id)dynamicPatchModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
