@class NSString, IESECYataInstanceUtil;
@protocol YataInstanceInterface;

@interface IESECYataAbility : IESECBaseAbility <IESECYataAbilityProtocol>

@property (retain, nonatomic) id<YataInstanceInterface> yataInstance;
@property (retain, nonatomic) IESECYataInstanceUtil *yataUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getNodeListFilterFields:(id /* block */)a0;
- (id)initWithYataInstance:(id)a0;
- (id)getViewByCode:(id)a0;
- (void)triggerEventWithTrigger:(id)a0 renderObjectId:(id)a1 extraInfo:(id)a2 activeView:(id)a3;
- (id)getPopupViewWithCode:(id)a0;
- (id)getEventFieldsWithEventData:(id)a0;
- (id)getTriggerFieldsWithEventData:(id)a0;
- (id)getNodeFieldsWithEventData:(id)a0;
- (id)getNodeIdWithEventData:(id)a0;
- (id)getFieldsFromNode:(id)a0;
- (id)getTriggerViewWithEventData:(id)a0;
- (id)findSliceViewWithMatchVO:(id)a0;
- (id)getSliceMetaInfoWithMatchVO:(id)a0;
- (void).cxx_destruct;

@end
