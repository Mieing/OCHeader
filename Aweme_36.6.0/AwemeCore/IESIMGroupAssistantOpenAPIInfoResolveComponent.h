@class NSSet;

@interface IESIMGroupAssistantOpenAPIInfoResolveComponent : AWEIMComponentBase <IESIMGroupImpl.IESIMGroupAssistantOpenAPInfoInterface, AWEIMMessageListDataAction> {
    void /* function */ needShowMsgIds;
}

@property (nonatomic, copy) NSSet *needShowMsgIds;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterUpdateData;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
