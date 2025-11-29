@class NSString, AWEIMChatPanelModel;

@interface AWEIMMessageListShareProfileComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
