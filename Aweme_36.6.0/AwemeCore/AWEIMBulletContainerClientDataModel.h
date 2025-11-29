@class AWEIMBulletContainerClientDataExtraInfo, NSString, AWEIMBulletContainerClientDataConversationInfo, AWEIMBulletContainerClientDataContainerPerfModel, AWEIMBulletContainerClientDataMessageInfo, AWEIMBulletContainerUIInfo, AWEIMBulletContainerClientDataCardInfo;

@interface AWEIMBulletContainerClientDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMBulletContainerClientDataConversationInfo *conversationInfo;
@property (retain, nonatomic) AWEIMBulletContainerClientDataMessageInfo *messageInfo;
@property (retain, nonatomic) AWEIMBulletContainerClientDataContainerPerfModel *containerPerf;
@property (retain, nonatomic) AWEIMBulletContainerUIInfo *uiInfo;
@property (retain, nonatomic) AWEIMBulletContainerClientDataCardInfo *cardInfo;
@property (copy, nonatomic) NSString *loadType;
@property (retain, nonatomic) AWEIMBulletContainerClientDataExtraInfo *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithConversation:(id)a0 message:(id)a1 actionInfo:(id)a2 routerParams:(id)a3;
- (void)__configDataWithConversation:(id)a0 message:(id)a1 actionInfo:(id)a2;
- (void)p_processDataInCombineShareIfNeed:(id)a0;
- (id)initWithDynamicPatchModel:(id)a0 conversation:(id)a1 message:(id)a2;
- (id)initWithConversation:(id)a0 message:(id)a1 actionInfo:(id)a2;
- (void).cxx_destruct;

@end
