@class IESLivePublicScreenSettingPanelViewModel, HTSLiveToolbarItem, NSString;
@protocol IESLiveRoomService;

@interface IESLivePublicScreenSettingManager : NSObject <HTSLiveMessageSubscriber, IESLivePublicScreenSettingChangedProvider>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLivePublicScreenSettingPanelViewModel *viewModel;
@property (weak, nonatomic) HTSLiveToolbarItem *settingItem;
@property (nonatomic) BOOL hasSetPSSettingEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)hasRedDot;
- (void)showPublicScreenSettingPanelViewWithScene:(id)a0;
- (void)addPublicScreenSettingChangeSubscriber:(id)a0;
- (BOOL)shouldShowItem;
- (void)setupSettingEntrance;
- (void)addPublicScreenSettingPSActionSheetItem;
- (void)addMessageListActionSheetItem;
- (void)addToolbarEntrance;
- (void)trackSettingClickWithScene:(id)a0;
- (void)updateToolbarItemRedDot;
- (void)trackSettingPanelShowWithScene:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
